#include <iostream>
#include <vector>
using namespace std;

int count_good_prefixes(const vector<int> &a)
{
    int n = a.size();
    long long sum = 0;
    int good_prefix_count = 0;

    for (int i = 0; i < n; ++i)
    {
        sum += a[i];
        if (2 * a[i] == sum)
        {
            ++good_prefix_count;
        }
    }

    return good_prefix_count;
}

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
        cout << count_good_prefixes(a) << endl;
    }

    return 0;
}
