#include <bits/stdc++.h>
using namespace std;
int max(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int min(int arr[], int size)
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int t;
        cin >> t;
        int arr[t];
        for (int i = 0; i < t; i++)
        {
            cin >> arr[i];
        }
        int m = max(arr, t);
        int mi = min(arr, t);
        cout << (m - mi) * (t - 1) << endl;
    }

    return 0;
}