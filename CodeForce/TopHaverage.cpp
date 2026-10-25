#include <bits\stdc++.h>
using namespace std;
int main()
{

    int n, value;
    vector<int> v;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        cin >> value;
        v.push_back(value);
    }
    for (int i = 0; i <= v.size(); i++)
    {
        cout << v[i];
    }
    return 0;
}