#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{

    int a;
    cout << "Enter Toes coin:" << endl;
    cin >> a;
    int random = rand() % 2 + 1;
    cout << random << endl;
    if (random == a)
    {

        cout << "TEL" << endl;
    }
    else if (random != a)
    {
        cout << "HEAD" << endl;
    }
    return 0;
}