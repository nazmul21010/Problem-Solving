#include <iostream>
#define x -1
#define y 66
#define z 36366
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a;
        cin >> a;
        if (a == 1 || a == 3)
        {
            cout << x << endl;
        }
        else if (a % 2 == 0)
        {
            for (int i = 0; i < a - 2; i++)
            {
                cout << "3";
            }
            cout << y << endl;
        }
        else
        {
            for (int i = 0; i < a - 5; i++)
            {
                cout << "3";
            }
            cout << z << endl;
        }
    }

    return 0;
}