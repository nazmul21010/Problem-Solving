#include <bits/stdc++.h>
using namespace std;

int count(int x, int y, int k)
{

    for (int i = 0; i < k; i++)
    {
        x++;
        while (x % y == 0)
        {
            x /= y;
        }
    }
    return x;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        cout << count(x, y, k) << endl;
    }
    return 0;
}