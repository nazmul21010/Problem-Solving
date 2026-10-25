#include <bits/stdc++.h>
using namespace std;
void func(vector<int> v, int a)
{
    int min = (abs(a - v[0]) + abs(a - v[1]) + abs(a - v[3]));
    cout << min << endl;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int value;
        vector<int> v;
        for (int i = 0; i < 3; i++)
        {
            cin >> value;
            v.push_back(value);
        }
        sort(v.begin(), v.end());
        func(v, v[1]);
        v.clear();
    }
    return 0;
}