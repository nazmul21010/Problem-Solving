#include <iostream>
#include <algorithm>
using namespace std;

int min_cost(int n, int a, int b)
{
    if (a * 2 <= b)
    {
        return n * a;
    }
    else
    {
        return (n / 2) * b + (n % 2) * a;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n, a, b;
        cin >> n >> a >> b;
        cout << min_cost(n, a, b) << endl;
    }
    return 0;
}