#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int main()
{
    int m, n;
    cin >> m >> n;

    vector<int> s(m), l(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> s[i];
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> l[i];
    }

    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    dp[1][1] = (s[0] + l[0]) % MOD;

    for (int i = 2; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            dp[i][j] = (1LL * dp[i][j - 1] * (s[i - 1] + l[i - 1]) + 1LL * dp[i - 1][j - 1] * s[i - 1]) % MOD;
        }
    }

    int ans = 0;
    for (int i = 1; i <= m; ++i)
    {
        ans = (ans + dp[i][n]) % MOD;
    }

    cout << ans << endl;

    return 0;
}
