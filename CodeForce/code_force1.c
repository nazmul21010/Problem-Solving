#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string solve(const string &s)
{
    if (s.size() == 1 || count(s.begin(), s.end(), s[0]) == s.size())
    {
        // If all characters are the same, it's impossible to rearrange them
        return "NO";
    }

    if (s.size() % 2 == 0)
    {
        // Swap any two adjacent characters (except the last two)
        return "YES\n" + s.substr(1, 1) + s.substr(0, 1) + s.substr(2);
    }
    else
    {
        // Swap the last two characters
        return "YES\n" + s.substr(s.size() - 1) + s.substr(0, s.size() - 1);
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }

    return 0;
}
