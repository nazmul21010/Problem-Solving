#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    while (true)
    {
        char ch;
        string str;
        cin >> ch >> str;
        if (ch == '0' && str == "0")
            break;

        vector<char> v;
        for (int i = 0; i < str.size(); i++)
        {
            if (ch != str[i])
            {
                v.push_back(str[i]);
            }
        }

        if (v.size() == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            int c = 0;
            while (c < v.size() && v[c] == '0')
            {
                c++;
            }

            if (c == v.size())
            {
                cout << "0" << endl;
            }
            else
            {
                for (int i = c; i < v.size(); i++)
                {
                    cout << v[i];
                }
                cout << endl;
            }
        }
    }

    return 0;
}
