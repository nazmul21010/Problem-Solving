#include <iostream>
using namespace std;
class base
{
public:
    int c;
    base()
    {
        cout << "base class defult constrctor..." << endl;
    }
    base(int x)
    {
        c = x;
        cout << "Base class peramiterize constractor..." << endl;
    }

    base(base &n)
    {
        c = n.c;
        cout << "Copy Costractor..." << endl;
    }
    void print()
    {
        cout << c << endl;
    }
};

int main()
{
    base a, b(45);
    b.print();
    a.print();
    base z(b);
    z.print();
}