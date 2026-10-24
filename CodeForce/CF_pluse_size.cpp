#include <bits/stdc++.h>
using namespace std;
int max_number(int a, int b)
{
    if (a > b)
        return a;
    else if (b > a)
        return b;
    else if (a == b)
        return a;
}
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int t;
        cin >> t;
        int arr[t];
        vector<int> v;
        for (int i = 0; i < t; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < t - 1; i++)
        {
            int x = max_number(arr[i], arr[i + 1]);
            v.push_back(x);
        }

        int size = v.size();
        int max = *max_element(v.begin(), v.end());
        cout << size << endl;
        v.clear();
    }

    return 0;
}