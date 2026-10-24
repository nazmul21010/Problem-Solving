#include <iostream>
using namespace std;
int sum(int arr[], int size)
{
    int sum_element = 0;
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            sum_element = sum_element + arr[i];
        }
        else
        {
            sum_element = sum_element - arr[i];
        }
    }
    return sum_element;
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
        int res = sum(arr, t);
        cout << res << endl;
    }
    return 0;
}