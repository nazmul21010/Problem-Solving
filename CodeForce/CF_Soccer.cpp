#include <bits/stdc++.h>
int fucn_score(int x1, int y1, int x2, int y2)
{
    if (x1 == y1)
    {
        return 0;
    }
    else if (x1 == x2 && y1 == y2)
    {
        return 1;
    }
    else
    {
        if (y1 == y2 && x1 < x2)
        {
            return fucn_score(x1 + 1, y1, x2, y2);
        }
        else if (y1 < y2 && x1 == x2)
        {

            return fucn_score(x1, y1 + 1, x2, y2);
        }
        else if (x1 < x2 && y1 < y2)
        {
            return fucn_score(x1 + 1, y1 + 1, x2, y2);
        }
    }
}

using namespace std;

int main()
{
    int t, x1, y1, x2, y2;
    cin >> t;
    while (t--)
    {
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        int c = fucn_score(x1, y1, x2, y2);
        if (c == 0)
        {
            cout << "NO" << endl;
        }
        else if (c == 1)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}