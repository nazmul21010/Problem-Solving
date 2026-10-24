#include <bits/stdc++.h>
using namespace std;
int max_size(vector<int> v)
{
    int max = v[0];
    for (int i = 0; i < v.size(); i++)
    {
        if (max < v[i])
        {
            max = v[i];
        }
    }
    return max;
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int t;
        cin >> t;
        vector<int> v;
        vector<int> v1;
        vector<int> v2;

        for (int i = 0; i < t; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        if (t == 1)
        {
            cout << v[0] + 1 << endl;
        }
        else
        {
            for (int i = 0; i < v.size(); i = i + 2)
            {

                v1.push_back(v[i]);
            }
            for (int j = 1; j < v.size(); j = j + 2)
            {

                v2.push_back(v[j]);
            }

            int max1 = max_size(v1);
            int max2 = max_size(v2);

            if (max1 >= max2)
            {
                cout << max1 + v1.size() << endl;
            }
            else
            {
                cout << max2 + v2.size() << endl;
            }
        }
        v.clear();
        v1.clear();
        v2.clear();
    }
    return 0;
}