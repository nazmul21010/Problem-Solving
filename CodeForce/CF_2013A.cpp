#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int x, y;
        cin >> x >> y;
        int ans;
        ans = min(x, y);
        cout << (n + ans - 1) / ans << endl;
    }
    return 0;
}