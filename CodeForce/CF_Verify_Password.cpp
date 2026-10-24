#include <bits/stdc++.h>
using namespace std;
bool password(string str)
{
    string digit = "";
    string let = "";
    int x = str.size();
    for (int i = 0; i < x; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            return false;
        }
    }
    for (char cha : str)
    {
        if (isdigit(cha))
        {
            digit = digit + cha;
        }
        else
        {
            let = let + cha;
        }
    }
    if (!is_sorted(digit.begin(), digit.end()))
    {
        return false;
    }
    if (!is_sorted(let.begin(), let.end()))
    {
        return false;
    }

    else if (str[0] == let[0] && digit.size() != 0)
    {
        return false;
    }
    else if (is_sorted(str.begin(), str.end()))
    {

        return true;
    }
}

int main()
{
    int a;
    cin >> a;
    while (a--)
    {

        int x;
        string str;
        cin >> x >> str;

        bool boolean = password(str);
        if (boolean == true)
        {
            cout << "Yes" << endl;
        }
        else if (boolean == false)
        {
            cout << "No" << endl;
        }
    }
    return 0;
}