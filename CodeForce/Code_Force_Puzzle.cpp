#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        int a, value, sum = 0;
        cin >> a;
        vector<int> v;
        v.clear();
        for (int i = 0; i < a; i++)
        {
            cin >> value;
            v.push_back(value);
        }
        for (int i = 0; i < a; i++)
        {

            sum += abs(v[i]);
        }
        cout << sum << endl;
    }

    return 0;
}