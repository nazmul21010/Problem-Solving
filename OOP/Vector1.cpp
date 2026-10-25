#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, value;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        v.push_back(value);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    v.erase(v.begin() + 2, v.end() - 1);
    v.insert(v.begin(), 45);
    cout << "After Pop_back" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}