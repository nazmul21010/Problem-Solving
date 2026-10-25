#include <iostream>
using namespace std;
class A
{
private:
    int a;
    string str;

public:
    A(int x, string s)
    {
        a = x;
        str = s;
    }

    friend class B;
};
class B
{
public:
    void print(A ob)
    {
        cout << ob.a << ob.str << endl;
    }
};
int main()
{
    A o(58, "nazmul");
    B ob1;
    ob1.print(o);
    return 0;
}