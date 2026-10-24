#include <iostream>
using namespace std;
int main()
{
    int t, c = 0;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (y - x >= 2)
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}