#include <iostream>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int t, m;
        cin >> t >> m;
        int arr[t];
        for (int i = 0; i < t; i++)
        {
            cin >> arr[i];
        }
        int sum = 0, gain = 0;
        for (int i = 0; i < t; i++)
        {
            if (arr[i] == 0)
            {
                sum++;
            }
            else
            {
                gain += gain;
            }
        }
        if (gain >= sum && sum != 0)
        {
            cout << sum << endl;
        }
        else if (gain < sum)
        {
            cout << gain << endl;
        }
        else if (sum == 0)
        {
            cout << sum << endl;
        }
    }

    return 0;
}