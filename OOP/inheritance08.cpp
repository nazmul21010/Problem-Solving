#include<iostream>
using namespace std;
class base
{
    public:
    int a,g;
   base(int x,int y)
   {
    a=x;
    g=y;
   }
void display(int x,int y)
{
 cout<<"Constractor base class :"<<x<<endl<<y<<endl;

};
~base(){
cout<<"Destractor base class :"<<endl;
}
};

class drive:public base{
public:
int u ,l;
drive(int o,int w)
{
    u=o;
    l=w;
}
void display(int m,int x)
{
    cout<<"drive class constractor :"<<m<<endl<<x<<endl;
}

};

int main()
{
  drive1 ob;
  ob.display(45,12);

    return 0;
}