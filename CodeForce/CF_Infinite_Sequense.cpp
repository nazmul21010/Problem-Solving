#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (1)
    {
        int i;
        cin >> i;
        if (i == 3)
        {
            int a, b, c;
            cin >> a >> b >> c;
            cout << (a | b | c) << endl;
        }
        else
        {
            int a, b;
            cin >> a >> b;
            cout << (a | b) << endl;
        }
    }
    return 0;
}