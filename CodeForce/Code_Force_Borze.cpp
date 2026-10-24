#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '-' && str[i + 1] == '-')
        {
            str[i] = '2';
        }
        else if (str[i] == '-' && str[i + 1] == '.')
        {
            str[i] = '1';
        }
        else if (str[i] == '.')
        {
            str[i] = '0';
        }

        cout << str[i] << endl;
    }

    return 0;
}