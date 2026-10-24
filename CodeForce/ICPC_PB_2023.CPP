#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll range_sum(ll l, ll r) {
  if (l > r) return 0;
  return r * (r + 1) / 2 - l * (l - 1) / 2;
}
ll range_sum2(ll l, ll r) {
  if (l > r) return 0;
  return r * (r + 1) * (2 * r + 1) / 6 - (l-1) * ((l-1) + 1) * (2 * (l-1) + 1) / 6;
}
ll yo1(ll x, ll l, ll r) {
  if (l > r) return 0;
  // sum of (x - i) * (i - 1) over l <= i <= r;
  // ll s = 0;
  // for (ll i = l; i <= r; i++) {
  //   s += (x - i) * (i - 1);
  // }
  // return s;
  return x * range_sum(l, r) - range_sum2(l, r) + range_sum(l, r) - (r - l + 1) * x;
}
ll solve1(ll n, ll x) {
  if (n < 0) return 0;
  ll block = n / x;
  ll ans = 0;
  if (block > 0) {
    ans += yo1(x, 1, block);
  }
  ll cur = n % x + 1;
  ll cnt = x - block - 1;
  ll val = block;
  ans += min(cur, cnt) * val;
  return ans;
}
ll yo2(ll x, ll l, ll r) {
  if (l > r) return 0;
  // ll s = 0;
  // for (ll i = l; i <= r; i++) {
  //   s += (x - i) * i;
  // }
  // return s;
  // sum of (x - i) * i over l <= i <= r;
  return x * range_sum(l, r) - range_sum2(l, r);
}
ll solve2(ll n, ll x) {
  if (n < 0) return 0;
  ll block = n / x;
  ll ans = 0;
  if (block > 0) {
    ans += yo2(x, 1, block);
  }
  ll cur = n % x + 1;
  ll cnt = x - block - 1;
  ll val = block + 1;
  ans += min(cur, cnt) * val;
  return ans;
}
ll solve(ll n, ll x) {
  ll ans = solve1(n, x);
  ans += yo2(x, 1, x - 1) - solve2(x * (x - 1) - 2 - n, x);
  return ans;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t, cs = 0; cin >> t;
  while (t--) {
    ll x, n; cin >> x >> n;
    ll cyc = x * (x - 1);
    ll ans = solve(cyc - 1, x) * (n / cyc);
    ans += solve(n % cyc, x);
    cout << "Case " << ++cs << ": " << ans << '\n';
  }
  return 0;
}