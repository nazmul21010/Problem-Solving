#include <bits/stdc++.h>
using namespace std;
int min(int n, int k)
{
    if (n >= k)
    {
        return k;
    }
    else if (n < k)
    {
        return n;
    }
}
int main()
{

    int tt;
    cin >> tt;
    while (tt--)
    {
        int k, n;
        cin >> k >> n;
        int arr[n];
        vector<int> v, v1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> arr[i] >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for (int i = v.size() - 1; i >= 0; i--)
        {
            v1.push_back(v[i]);
        }
        int sum = 0;
        int count = 0;
        int loop = min(n, k);
        for (int i = 0; i < loop; i++)
        {
            count++;
            sum += v1[i];
        }
        cout << sum << endl;
    }

    return 0;
}