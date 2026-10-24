#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    int arr[t];
    if (t % 2 != 0)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 0; i < t; i += 2)
        {
            arr[i] = i + 2;
            arr[i + 1] = i + 1;
        }
        for (int i = 0; i < t; i++)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}