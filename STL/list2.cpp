#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> li = {1, 8, 8, 8, 5, 8, 98, 3, 7};

    li.unique();

    for (auto it : li)
    {
        cout << it << " ";
    }
    return 0;
}
