#include <iostream>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        for (int i = 0; i < size - 1; i++)
        {
            if (abs(arr[i] - arr[i + 1]) == 5 || abs(arr[i] - arr[i + 1]) == 7)
            {
                count++;
            }
        }
        if (count == size - 1)
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