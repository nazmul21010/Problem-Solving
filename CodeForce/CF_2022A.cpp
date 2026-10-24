#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (b - c >= 0)
    {
        b += b - c;
    }
    else
    {
        b = b;
    }
    cout << a - b << endl;
    return 0;
}