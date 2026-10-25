#include<iostream>
using namespace std;

class base
{
    protected:
    int a,b;
    public:
   void set_x(int x,int y)

    {
        a=x;
        b=y;
     
    }
};

class derived:public base
{
  int c;
public:
  int set_y(int o)
{
    c=o;
}
void set_xy()
{
cout<<a<<endl<<b<<endl<<c;

}
};
int main()
{

derived ob;
ob.set_x(5,2);
ob.set_y(5);
ob.set_xy();
return 0;
}