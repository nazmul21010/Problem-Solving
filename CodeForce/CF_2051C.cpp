#include <bits/stdc++.h>
using namespace std;
int ans(int arr[], int size, int sum)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < m; i++)
        {
        }
    }
}
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, m, q;
        cin >> n >> m >> q;
        int arr[m], qus[q];
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < q; i++)
        {
            cin >> qus[i];
        }
        int sum_qus = 0;
        for (int i = 0; i < m; i++)
        {
            sum_qus += qus[i];
        }
        int x = ans(arr, m, sum_qus);
    }

    return 0;
}