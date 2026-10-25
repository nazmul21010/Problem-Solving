#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int arr[a], arr2[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i] >> arr2[i];
    }
    cout << "output" << endl;
    for (int i = 0; i < a; i++)
    {
        if (arr[i] < arr2[i])
        {
            cout << arr[i] << " " << arr2[i] << endl;
        }
        else if (arr[i] > arr2[i])
        {
            cout << arr2[i] << " " << arr[i] << endl;
        }
        else
        {
            cout << arr[i] << " " << arr2[i] << endl;
        }
    }
    return 0;
}