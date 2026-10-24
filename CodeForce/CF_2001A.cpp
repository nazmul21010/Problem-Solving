#include <iostream>
#include <vector>
using namespace std;
int max_number(vector<int> v, int size)
{
    int max = v[0];
    for (int i = 0; i < size; i++)
        if (max < v[i])
        {
            max = v[i];
        }
    return max;
}
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int t, values;
        cin >> t;
        vector<int> arr;
        vector<int> temp;
        for (int i = 0; i < t; i++)
        {
            cin >> values;
            arr.push_back(values);
        }
        for (int i = 0; i < t; i + 2)
        {
            temp.push_back(arr[i]);
        }
        int max = max_number(temp, temp.size());
        int output = temp.size() + max;
        cout << output << endl;
    }
    return 0;
}