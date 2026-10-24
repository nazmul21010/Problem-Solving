#include <stdio.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a;
        cin >> a;
        int arr[a * 2];
        for (int i = 0; i < a * 2; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        for (int i = 0; i < 2 * a; i++)
        {
            sum += arr[i];
        }
        int mod = sum % 2;
        cout <<
    }

    return 0;
}