#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1;
    vector<int> v2;
    int n, value;
    cout << "Enter Scan Value:.." << endl;
    cin >> n;
    cout << "Enter First Vector:.." << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> value;
        v1.push_back(value);
    }

    for (int i = 0; i < v1.size(); i++)
    {
        cout << " " << v1[i];
    }

    return 0;
}