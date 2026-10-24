#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, k;
        cin >> x >> y >> k;

        long long distance = x + y;

        if (k == 1)
        {
            cout << distance << "\n";
        }
        else
        {

            long long moves = (distance + k - 1) / k;
            if ((moves % 2) != (x % k + y % k > k))
                moves++;
            cout << moves << "\n";
        }
    }
    return 0;
}
