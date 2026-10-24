#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    int piple_sum = 0;
    int arr[tt];
    char ch;
    for (int i = 0; i < tt; i++)
    {
        cin >> ch >> arr[i];
        if (ch == 'P')
        {
            piple_sum += arr[i];
        }
        else if (ch == 'B')
        {
            if (arr[i] > piple_sum)
            {
                cout << "YES" << endl;
                piple_sum = 0;
            }
            else
            {
                cout << "NO" << endl;
                piple_sum = (piple_sum - arr[i]);
            }
        }
    }
    return 0;
}