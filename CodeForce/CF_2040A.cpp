#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int x = 0;
        int temp = -1;
        for (int i = 0; i < n; i++)
        {
            int in = 0;
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    continue;
                if (abs(arr[i] - arr[j]) % k == 0)
                {
                    in = 1;
                    break;
                }
            }
            if (in == 0)
            {
                x = 1;
                temp = i + 1;
                break;
            }
        }

        if (x == 1)
        {
            cout << "YES" << endl;
            cout << temp << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}