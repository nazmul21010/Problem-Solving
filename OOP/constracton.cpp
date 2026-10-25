#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int a;
    int str[12];

    void display()
    {
        cout << a << endl
             << str << endl;
    }
    student(int x, int arr[12])
    {
        a = x;
        str[12] = arr[12];
    }
};
int main()
{

    student hridoy(15, 8);
    hridoy.display();
}