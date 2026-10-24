#include <bits/stdc++.h>
using namespace std;
int operation(int n, int k)
{
    if (k == 1)
    {
        return n;
    }
    int count = 0;
    while (n)
    {
        count += n % k;
        n /= k;
    }
    return count;
}
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        cout << operation(n, k) << endl;
    }
    return 0;
}