#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> x;
    int value;
    for (int i = 0; i < 3; i++)
    {
        cin >> value;
        x.push_back(value);
    }
    sort(x.begin(), x.end());
    cout << x[1] << endl;
    return 0;
}