#include <bits/stdc++.h>
using namespace std;

int min_ope(int arr[], int size)
{
    int o = 0;
    for (int i = 1; i < size; ++i)
    {
        if (arr[i] < arr[i - 1])
        {
            o += 1;
            arr[i] = arr[i - 1];
        }
    }

    return o;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << min_ope(arr, n) << endl;
    }

    return 0;
}
