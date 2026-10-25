#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n, value;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        v.push_back(value);
    }
    vector<int>::iterator it;
    for (int i = 0; i < v.size(); i++)
    {
        it = v.begin() + i;
        cout << " " << *it;
    }

    return 0;
}