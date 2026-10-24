#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int sz = 1e5 + 5, mod = 1e9 + 7;
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t = 1; cin >> t;
	while(t--) {
		string s; cin >> s;
		int n = s.size();
		int run = 0;
		int wkt = 0;
		for(char &cc:s) {
			if(cc == 'W') wkt++;
			else run += (cc - '0');
		}
		cout << n / 6 << "." << n % 6 << " Over";
		if(n > 6) cout << "s";
		cout << " " << run << " Run";
		if(run > 1) cout << "s";
		cout << " " << wkt << " Wicket";
		if(wkt > 1) cout << "s";
		cout << ".\n";
	}
	return 0; 
}