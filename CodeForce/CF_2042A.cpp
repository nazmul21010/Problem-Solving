#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        sort(arr.begin(), arr.end());
        int sum = 0, c = 0;
        for (int i = arr.size() - 1; i >= 0; i--)
        {
            c += arr[i];
            if (c <= k)
                sum += arr[i];

            else if (sum > k)
            {
                break;
            }
        }
        int result = k - sum;
        cout << result << endl;
    }

    return 0;
}