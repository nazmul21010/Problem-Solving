#include <iostream>
using namespace std;
int main()
{
    string columTitle;
    cin >> columTitle;
    int x = columTitle.size();
    int sum = 0, sum2 = 0;
    for (int i = 0; i < x; i++)
    {
        sum *= columTitle[i] - 64;
        sum2 += columTitle[i] - 64;
    }
    cout << sum + sum2;
}