#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (n--)
    {
        int a, value;
        cin >> a;
        vector<int> v;
        for (int i = 0; i < a; i++)
        {
            cin >> value;
            v.push_back(value);
        }
        for (int i = 0; i < a; i++)
        {
            cout << v[i];
        }
    }
    return 0;
}