#include <iostream>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int count = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        for (int j = n - 1; j >= 0; --j)
        {
            if (a[i][j] < 0)
            {
                int n = -a[i][j];
                count += n;

                for (int k = 0; k <= min(i, j); ++k)
                {
                    a[i - k][j - k] += n;
                }
            }
        }
    }
    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
