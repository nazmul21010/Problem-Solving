#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v;
    int a, value, temp;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> value;
        v.push_back(value);
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] > v[j])
            {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << " " << v[i];
    }
    return 0;
}