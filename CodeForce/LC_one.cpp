#include <bits/stdc++.h>
using namespace std;
void final_arr(int arr[], int size);
void final_arr(int arr[], int size)
{
    if (arr[size - 1] < 9)
    {
        arr[size - 1] = arr[size - 1] + 1;
    }
}
int main()
{
    int a;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    final_arr(arr, a);
    for (int i = 0; i < a; i++)
    {
        cout << arr[i];
    }
    return 0;
}