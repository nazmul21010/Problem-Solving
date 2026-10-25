class base
{
int x;
public :
void setx (int n) { x = n; }
void showx () { cout << x << endl; }
};
// Inherit as public - this has an error !
class derived : public base
{
int y;
public :
void sety (int n) { y = n; }
/*
Cannot access private member of base class .
x is a private member of base and not available
within derived .
*/
void show_sum () { cout << y <<endl; } // Error !
void showy () { cout << y <<endl; }
};

int main()
{
  derived ob1;
  ob1.setx(10);
  ob1.sety(20);




}