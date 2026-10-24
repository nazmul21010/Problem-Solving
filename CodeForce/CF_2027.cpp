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
        int arr[n], temp_arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i] >> temp_arr[i];
        }
        int w = *max_element(arr, arr + n);
        int h = *max_element(temp_arr, temp_arr + n);
        cout << 2 * (w + h) << endl;
    }

    return 0;
}
