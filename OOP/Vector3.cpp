#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1;
    int n, value;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        v1.push_back(value);
    }
    cout << "Before Sorting....." << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i];
    }
    cout << "\n";
    sort(v1.begin(), v1.end());
    cout << "After Sorting....." << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i];
    }
    cout << "\n";
    reverse(v1.begin(), v1.end());
    cout << "After reverse....." << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i];
    }
    return 0;
}