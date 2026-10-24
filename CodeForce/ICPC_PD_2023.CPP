#include<bits/stdc++.h>
using namespace std;

const int N = 3e5 + 9;

// returns the longest proper prefix array of pattern p
// where pi[i] = longest proper prefix which is also suffix of p[0...i]
vector<int> prefix_function(string p) {
  int sz = p.size();
  vector<int> pi;
  pi.assign(sz, 0);
  int j = 0;
  pi[0] = 0;
  for (int i = 1; i < sz; i++) {
    while (j >= 0 && p[i] != p[j]) {
      if (j >= 1) j = pi[j - 1];
      else j = -1;
    }
    j++;
    pi[i] = j;
  }
  return pi;
}
vector<int> pi;
string p, q;
int n, m;
int go(int j, char c) {
  if (j == m) j = pi[j - 1];
  while (j >= 0 && p[j] != c) {
    if (j >= 1) j = pi[j - 1];
    else j = -1;
  }
  j++;
  return j;
}
int dp[N], pref[N], last[N], par[N];
vector<int> g[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    cin >> p >> q;
    n = p.size(), m = q.size();
    pi = prefix_function(p);
    for (int i = 0; i <= n; i++) {
      g[i].clear();
      last[i] = 0;
    }
    for (int i = 1; i <= n; i++) {
      g[pi[i - 1]].push_back(i);
      par[i] = pi[i - 1];
    }
    dp[0] = 0;
    pref[0] = 0;
    int j = 0;
    for (int i = 1; i <= m; i++) {
      j = go(j, q[i - 1]);
      dp[i] = pref[i] = 0;
      // compute dp[i]
      int k = j;
      while (k) {
        dp[i] += 1 + pref[i - 1];
        dp[i] -= pref[last[k]];
        k = par[k];
      }
      pref[i] = pref[i - 1] + dp[i];
      // upd last array
      k = j;
      while (k) {
        last[k] = i;
        k = par[k];
      }
    }
    cout << pref[n] << '\n';
  }
  return 0;
}