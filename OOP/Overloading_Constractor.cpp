#include <iostream>
using namespace std;
class myclass
{
    int x;

public:
    // overload constructor two ways
    myclass() { x = 0; } // no initializer
    myclass(int n)
    {
        x = n;
    } // initializer
    int getx()
    {
        return x;
    }
};
int main()
{
    myclass *p;
    myclass ob(10);
    p = new myclass[10];
    if (!p)
    {
        cout << " Allocation error";
        return 1;
    }
    int i;
    // initialize all elements to ob
    for (i = 0; i < 10; i++)
        p[i] = ob;
    for (i = 0; i < 10; i++)
    {
        cout << p[i].getx();
    }
    return 0;
}
