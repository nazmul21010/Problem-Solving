#include <iostream>
using namespace std;
class Myclass
{
public:
    int u, a, b;
    Myclass()
    {
        cout << "Defult Constrctor..." << endl;
    }
    Myclass(int x)
    {
        cout << "One Peramiter..." << endl;
        u = x;
    }
    Myclass(int c, int v)
    {
        cout << "Two Peramiter..." << endl;
        a = c;
        b = v;
    }
    Myclass(Myclass &ob)
    {
        cout << "Copy Constractor...." << endl;
        u = ob.u;
    }
    void display()
    {
        cout << a << endl;
    }
};
int main()
{
    Myclass a, b(89), c(12, 89);
    b.display();
    Myclass z(b);
    z.display();
    return 0;
}