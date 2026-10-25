#include <iostream>
using namespace std;
class Myclass
{
public:
    Myclass()
    {
        cout << "Defult Constractor" << endl;
    }
    int x;
    Myclass(int y)
    {
        x = y;
        cout << "It is constractor" << x << endl;
    }

    ~Myclass()
    {
        cout << "Destractor call" << endl;
    }
};

int main()
{
    Myclass a;
    Myclass b(45);
    return 0;
}
