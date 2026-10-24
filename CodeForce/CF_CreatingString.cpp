#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str, str1;
        cin >> str >> str1;
        swap(str[0], str1[0]);
        cout << str << " " << str1 << endl;
    }

    return 0;
}