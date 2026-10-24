#include <bits/stdc++.h>
using namespace std;
int isDes_Sort(vector<int> v);
int sorted(vector<int> v, int size)
{
    if (is_sorted(v.begin(), v.end()))
    {
        return 1;
    }
    else if (isDes_Sort(v) == 1)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
int isDes_Sort(vector<int> v)
{
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
            return 0;
    }
    return 1;
}
int main()
{
    vector<int> v;
    int value;
    for (int i = 0; i < 5; i++)
    {
        cin >> value;
        v.push_back(value);
    }
    int x = sorted(v, v.size());
    if (x == 1)
    {
        cout << "C" << endl;
    }
    else if (x == -1)
    {
        cout << "D" << endl;
    }
    else if (x == 0)
    {
        cout << "N" << endl;
    }
    return 0;
}