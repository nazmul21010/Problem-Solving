#include <iostream>
using namespace std;
class MyClass
{
public:
    int x, y;
    MyClass()
    {
        x = 0;
        y = 0;
    }
    MyClass(int a, int b)
    {
        x = a;
        y = b;
    }
    void Address_xy(int &i, int &j)
    {
        i = x;
        j = y;
    }
};
MyClass operator-(MyClass a, MyClass b)
{
    MyClass temp;
    temp.x = a.x - b.x;
    temp.y = a.y - b.y;
    return temp;
}
int main()
{
    MyClass ob1(45, 13), ob2(56, 89), o3;
    o3 = ob1 - ob2;
    int x, y;
    o3.Address_xy(x, y);
    cout << x << endl
         << y << endl;
}