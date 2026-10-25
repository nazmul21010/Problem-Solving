#include <iostream>
using namespace std;
int reverse(int x)
{
    int temp = x;
    int swap = 0;
    while (temp)
    {
        int r = temp % 10;
        swap = (swap * 10) + r;
        temp = temp / 10;
    }

    return swap;
}
int main()
{
    int c;
    cin >> c;
    cout << reverse(c);
    return 0;
}
