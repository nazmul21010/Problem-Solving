#include <bits/stdc++.h>
using namespace std;
int main()
{

    list<int> li;
    int n, value;
    cout << "Scan value..." << endl;
    cin >> n;
    cout << "List Scan..." << endl;
    for (int i = 0; i < n; i++)
    {

        cin >> value;
        li.push_back(value);
    }
    list<int>::iterator it;
    it = li.begin();
    advance(it, 2);
    li.insert(it, 2, 8);
    cout
        << "List Print..." << endl;
    for (auto it : li)
    {
        cout << it << " ";
    }
    cout << "\n"
         << li.size() << endl;
    return 0;
}