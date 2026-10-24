#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long int t, a, b, n, k, r1 = 0, tc = 0;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            r1 += (k / (a));
            cout << r1 << " ";
        }
        tc++;
        cout << "Case " << tc << ": " << r1 << endl;
        r1 = 0;
    }

    return 0;
}