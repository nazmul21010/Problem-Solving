#include <iostream>
using namespace std;
class Coord
{
    int x, y;

public:
    Coord()
    {
        x = 0;
        y = 0;
    }
    Coord(int i, int j)
    {
        x = i;
        y = j;
    }
    void get_number(int &i, int &j)
    {
        i = x;
        j = y;
    }

    Coord operator+(Coord ob1);
    Coord operator-(Coord ob1);
};

int main()
{
    int x, y;
    Coord ob1(12, 45);
    Coord ob2(89, 12);
    Coord ob3;
    ob3 = ob1 + ob2;
    ob3.get_number(x, y);
    cout << x << endl
         << y << "\n";

    Coord ob4 = ob1 - ob2;
    ob4.get_number(x, y);
    cout << x << endl
         << y;
}

Coord Coord ::operator-(Coord ob1)
{

    Coord temp;
    temp.x = x - ob1.x;
    temp.y = y - ob1.y;
    return temp;
}

Coord Coord::operator+(Coord ob1)
{
    Coord temp;
    temp.x = x + ob1.x;
    temp.y = y + ob1.y;
    return temp;
}
