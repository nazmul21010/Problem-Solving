#include <iostream>
using namespace std;
class Myclass
{
public:
    int x, y;

    Myclass()
    {
        x = 0;
        y = 0;
    };

    Myclass(int a, int b)
    {
        x = a;
        y = b;
    }

    void get_xy(int &i, int &j)
    {
        i = x;
        j = y;
    }
};

Myclass operator+(Myclass a, Myclass b)
{

    Myclass temp;
    temp.x = a.x + b.x;
    temp.y = a.y + b.y;
    return temp;
}
int main()
{
    Myclass o(74, 23), o2(45, 56);
    Myclass o3;
    int x, y;
    o3 = o + o2;
    o3.get_xy(x, y);
    cout << "X:" << x << endl
         << "Y:" << y << endl;
}