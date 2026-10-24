#include <bits/stdc++.h>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, m;
        cin >> n >> m;
        int len = 0, c = 0;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            string str;
            cin >> str;
            v.push_back(str);
        }

        for (int i = 0; i < v.size(); i++)
        {
            string s = v[i];

            len += s.length();
            if (len <= m)
            {
                c++;
            }
            else
            {
                break;
            }
        }
        cout << c << endl;
    }

    return 0;
}