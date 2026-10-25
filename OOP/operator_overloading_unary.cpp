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
    }
    Myclass(int a, int b)
    {
        x = a;
        y = b;
    }
    void Address_xy(int &i, int &j)
    {
        i = x;
        j = y;
    }
    // friend Myclass operaotr++(Myclass &ob);
};
Myclass operator++(Myclass &ob, int notused)
{

    ob.x++;
    ob.y++;
    return ob;
}
int main()
{

    Myclass ob(12, 45);
    int x, y;
    ob++;

    ob.Address_xy(x, y);
    cout << x << endl
         << y;
}
