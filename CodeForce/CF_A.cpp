#include <iostream>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a;
        cin >> a;
        if (a % 2 == 0)
        {
            cout << "Sakurako" << endl;
        }
        else
        {
            cout << "Kosuke" << endl;
        }
    }

    return 0;
}