#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    int sum = 0, temp, r;
    for (int i = 0; i < t; i++)
    {
        temp = arr[i];
        while (temp != 0)
        {
            r = temp % 10;
            sum = sum + r;
            temp = temp / 10;
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}