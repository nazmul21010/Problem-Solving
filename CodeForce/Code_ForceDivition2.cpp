#include <bits/stdc++.h>

using namespace std;

int min_screens(int x, int y)
{

    int full_screens = y / 2;
    int remaining = y % 2;

    int screens = full_screens;

    int remaining_space = 15 * full_screens;
    if (remaining > 0)
    {
        screens += 1;
        remaining_space += 11;
    }

    int remaining_array = x;
    int total_remaining_space = screens * 15 - y * 4;

    if (remaining_array > total_remaining_space)
    {
        remaining_array -= total_remaining_space;
        screens += (remaining_array + 14) / 15;
    }

    return screens;
}

int main()
{
    int a;
    cin >> a;
    vector<int> results(a);
    for (int i = 0; i < a; ++i)
    {
        int x, y;
        cin >> x >> y;
        results[i] = min_screens(x, y);
    }

    for (int result : results)
    {
        cout << result << endl;
    }

    return 0;
}
