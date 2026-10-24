#include <iostream>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int count = 0;
        int sum = 0;
        while (1)
        {

            if (sum < n)
            {
                sum += a;
                count++;
            }
            if (sum < n)
            {
                sum += b;
                count++;
            }
            if (sum < n)
            {
                sum += c;
                count++;
            }
            if (sum >= n)
            {
                break;
            }
        }
        cout << count << endl;
    }

    return 0;
}
