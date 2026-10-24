#include <iostream>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a, b;
        char ex;
        cin >> a >> ex >> b;
        if (a < b && ex == '<')
            cout << a << ex << b << endl;
        else if (a > b && ex == '<')
            cout << a << ex << a + 1 << endl;
        else if (a > b && ex == '>')
            cout << a << ex << b << endl;
        else if (a < b && ex == '>')
            cout << b + 1 << ex << b << endl;
        else if (a == b && ex == '=')
            cout << a << ex << b << endl;
        else if (a > b && ex == '=')
            cout << a << '>' << b << endl;

        else if (a < b && ex == '=')
            cout << a << '<' << b << endl;
    }

    return 0;
}