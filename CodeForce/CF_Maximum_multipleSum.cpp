#include <iostream>
using namespace std;
int find_x(int n)
{
    int sum = 0;
    int best_x = 2;

    for (int x = 2; x <= n; ++x)
    {
        int k = n / x;
        int current_sum = x * (k * (k + 1)) / 2;
        if (current_sum > sum)
        {
            sum = current_sum;
            best_x = x;
        }
    }

    return best_x;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int x = find_x(a);
        cout << x << endl;
    }

    return 0;
}
