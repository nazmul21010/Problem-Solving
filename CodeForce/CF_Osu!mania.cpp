#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        vector<string> v;
        string str;
        for (int i = 0; i < a; i++)
        {
            cin >> str;
            v.push_back(str);
        }
        for (int i = v.size() - 1; i >= 0; i--)
        {
            string temp = v[i];
            int p = 1;
            for (int j = 0; j < v[i].size(); j++)
            {
                if (temp[j] == '#')
                {
                    break;
                }
                else
                {
                    p++;
                }
            }
            cout << p << " ";
        }
        cout << endl;
    }

    return 0;
}