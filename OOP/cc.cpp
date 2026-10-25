#include <bits/stdc++.h>

int main()
{
    using namespace std;

    list<int> myList;
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    cout << "List after push_back: ";
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
