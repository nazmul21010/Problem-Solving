#include <iostream>
using namespace std;

template <class temp, class temp2>
temp add(temp a, temp2 b)
{
    return a + b;
}
int main()
{

    cout << add(45.45, 89);
}