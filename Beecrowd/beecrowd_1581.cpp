#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, c = 1;
        cin >> x;
        int temp = x;
        vector<string> v;
        string str, str2;
        while (x--)
        {
            cin >> str;
            v.push_back(str);
        }
        if (x == 1)
        {
            cout << v[0];
            v.clear();
        }
        else
        {
            for (int i = 0; i < v.size(); i++)
            {

                if (v[i] == v[i + 1])
                {
                    str2 = v[i];
                    c++;
                }
            }
            if (temp != c)
            {
                cout << "ingles" << endl;
            }

            else if (c == temp)
            {
                cout << str2 << endl;
            }
            v.clear();
        }
    }
    return 0;
}