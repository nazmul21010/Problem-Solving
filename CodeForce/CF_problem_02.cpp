#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[5];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    int c = 0;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}