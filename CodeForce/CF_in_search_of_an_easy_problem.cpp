#include <iostream>
using namespace std;
int main()
{
    int a, c = 0;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == 1)
        {
            c = 1;
        }
    }
    if (c == 0)
    {
        cout << "EASY" << endl;
    }
    else if (c == 1)
    {
        cout << "HARD" << endl;
    }
    return 0;
}