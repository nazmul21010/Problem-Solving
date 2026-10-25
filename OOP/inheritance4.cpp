# include <iostream >
using namespace std;
class base
{
    protected:
int x;
public :

void setx (int n) { x = n; }
void showx () { cout << x << endl; }
};
// Inherit base as private .
class derived : public base
{
int y;
public :
// setx is accessible from within derived
void setxy (int n, int m) { x=n; y = m; }
// show is accessible from within derived
void showxy () { showx (); cout << y << endl; }
};
int main ()
{
derived ob;
ob. setxy (10 , 20) ;
ob. showxy ();
ob.setx(10);
ob.showx();
return 0;
}