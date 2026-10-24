#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int s, sum = 0;
        cin >> s;
        int arr[s];
        for (int i = 0; i < s; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < s - 1; i++)
        {
            int f = abs(arr[i] - arr[i + 1]);
            if (f > arr[i] && f < arr[i + 1])
            {
                sum++;
            }
            else if (f > arr[i + 1])
            {
                sum++;
            }
        }
        if (sum != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}