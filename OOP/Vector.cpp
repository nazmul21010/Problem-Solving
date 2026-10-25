#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    cout << "Vector pusing...";
    cout << endl;
    arr.push_back(45);
    arr.push_back(12);
    arr.push_back(23);
    arr.push_back(20);
    arr.push_back(89);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}