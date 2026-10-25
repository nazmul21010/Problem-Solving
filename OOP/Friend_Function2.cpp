#include <iostream>
using namespace std;
class Myclass
{
private:
    int a;
    int b;
    string str;

public:
    Myclass(int x, int y, string s)
    {
        a = x;
        b = y;
        str = s;
    }
    friend class Myclass2;
};
class Myclass2
{
public:
    void print(Myclass ob)
    {
        cout << ob.a << ob.b << ob.str;
    }
};
int main()
{
    Myclass o(21, 89, "Nazmul");
    Myclass2 ob1;
    ob1.print(o);
    return 0;
}