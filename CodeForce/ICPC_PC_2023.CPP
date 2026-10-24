#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int sz = 2e3 + 5, mod = 1e9 + 7;
string c[sz];
ll arr[sz][sz];
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t = 1; cin >> t;
	int cs = 0;
	while(t--) {
		{
			cs++;
			cout << "Case " << cs << ":\n";
		}
		ll n, k; cin >> n >> k;
		std::vector<array<ll,4>> add;
		for(ll i = 0; i < n; i++) {
			cin >> c[i];
			for(ll j = 0; j < n; j++) {
				arr[i + 1][j + 1] = (c[i][j] - '0');
				arr[i + 1][j + 1] += arr[i + 1][j];
				if(c[i][j] == '1') {
					ll r1 = 1LL * i * k + 1;
					ll r2 = r1 + k - 1;
					ll c1 = 1LL * j * k + 1;
					ll c2 = c1 + k - 1;
					add.push_back({r1, r2, c1, c2});
				}
			}
		}
		sort(add.begin(), add.end());
		ll q; cin >> q;
		std::vector<array<ll,4>> quer2;
		std::vector<array<ll,3>> quer1;
		std::vector<ll> ans(q);
		auto find_row_col = [&](ll val) {
			ll row = val / (n * k);
			ll col = val % (n * k);
			return make_pair(row + 1, col + 1);
		};
		for(ll i = 0; i < q; i++) {
			ll l, r; cin >> l >> r;
			auto [r1, c1] = find_row_col(l);
			auto [r2, c2] = find_row_col(r);
			if(r1 < r2 - 1) {
				quer1.push_back({r2 - 1, 1, i});
				quer1.push_back({r1, -1, i});
			}
			if(r1 == r2) {
				quer2.push_back({r1, c1, c2, i});
			} else {
				quer2.push_back({r1, c1, n * k, i});
				quer2.push_back({r2, 1, c2, i});
			}
		}
		sort(quer1.begin(), quer1.end());
		ll i = 0;
		multiset<pair<ll,ll>>st;
		ll com_sum = 0;
		ll incom_sum = 0;
		ll incom_cnt = 0;
		for(auto &[a, b, c]:quer1) {
			while(i < add.size() && add[i][0] <= a) {
				auto [r1, r2, c1, c2] = add[i];
				incom_sum += r1 - 1;
				incom_cnt++;
				st.insert({r2, r1});
				i++;
			}
			while(!st.empty() && (*st.begin()).first <= a) {
				auto [r2, r1] = *st.begin();
				incom_cnt--;
				incom_sum -= r1 - 1;
				com_sum += r2 - r1 + 1;
				st.erase(st.begin());
			}
			ans[c] += b * (com_sum + (incom_cnt * a) - incom_sum);
		}
		for(ll i = 0; i < q; i++) ans[i] *= k;
		sort(quer2.begin(), quer2.end());
		auto find_row_sum = [&](ll row, ll a, ll b) {
			if(a > b) return 0LL;
			return arr[row][b] - arr[row][a - 1];
		};
		for(auto [row, cc1, cc2, id]:quer2) {
			ll r11 = (row - 1) / k + 1;
			ll c11 = (cc1 - 1) / k + 1;
			ll c22 = (cc2 - 1) / k + 1;
			ans[id] += 1LL * k * find_row_sum(r11, c11 + 1, c22 - 1);
			if(c11 == c22) {
				if(c[r11 - 1][c11 - 1] == '1') ans[id] += cc2 - cc1 + 1;
			} else {
				ll l1 = k - (cc1 - 1) % k;
				if(c[r11 - 1][c11 - 1] == '1') ans[id] += l1;

				ll l2 = (cc2 - 1) % k + 1;
				if(c[r11 - 1][c22 - 1] == '1') ans[id] += l2;
			}
		}
		for(ll i = 0; i < q; i++)
			cout << ans[i] << "\n";
	}
	return 0; 
}