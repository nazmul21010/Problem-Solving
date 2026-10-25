#include <iostream>
using namespace std;
bool can_build_tower(int n, int m)
{
    return abs(m) <= n && (n % 2 == m % 2);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (can_build_tower(n, m))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}