#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int min_val = *min_element(a.begin(), a.end());
        int max_val = *max_element(a.begin(), a.end());

        if (min_val == max_val)
        {
            cout << min_val << endl;
        }
        else
        {
            cout << max_val << endl;
        }
    }

    return 0;
}
