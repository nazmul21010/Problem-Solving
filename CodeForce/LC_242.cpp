#include <bits/stdc++.h>
using namespace std;
int main()
{

    string str, str2;
    cin >> str >> str2;
    sort(str.begin(), str.end());
    sort(str2.begin(), str2.end());
    if (str == str2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}