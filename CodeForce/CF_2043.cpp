#include <bits/stdc++.h>
using namespace std;
long long int max_coin(long long int n)
{
    int count = 1;

    while (n > 3)
    {
        n /= 4;
        count = count * 2;
    }
    return count;
}
int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        long long int a;
        cin >> a;
        cout << max_coin(a) << endl;
    }

    return 0;
}