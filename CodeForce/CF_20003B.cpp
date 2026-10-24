#include <bits/stdc++.h>
using namespace std;
int max_element(int a, int b)
{
    if (a >= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int min_element(int a, int b)
{
    if (a >= b)
    {
        return b;
    }
    else
    {
        return a;
    }
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
        for (int i = 0; i < t; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        if (t % 2 == 0)
        {
            int c = 0;
            for (int i = 0; i < t - 1; i++)
            {
                c = i + 1;
                if (c % 2 != 0)
                {
                    int max_value = (max_element(v[i], v[i + 1]));
                    v.erase(v.begin() + i + 1);
                    swap(v[i], max_value);
                }
                else
                {
                    int min_value = (min_element(v[i], v[i + 1]));
                    v.erase(v.begin() + i + 1);
                    swap(v[i], min_value);
                }
            }
        }
        else if (t % 2 != 0)
        {
            int c = 0;
            for (int i = t - 2; i >= 0; i++)
            {
                c = i + 1;
                if (c % 2 != 0)
                {

                    int min_value = (min_element(v[i], v[i + 1]));
                    v.erase(v.begin() + i + 1);
                    swap(v[i], min_value);
                }
                else
                {
                    int max_value = (max_element(v[i], v[i + 1]));
                    v.erase(v.begin() + i + 1);
                    swap(v[i], max_value);
                }
            }
        }
        cout << v[0] << endl;
        v.clear();
    }

    return 0;
}