#include<iostream>
using namespace std;

class base{

public:
int a;
int b;
void display()
{
    cout<<"perent inheredance"<<endl;
    cout<<a+b<<endl;
}
};
class drived:public base{
public:
int a;
double f;
void display1()
{     cout<<"base1 inheredance"<<endl;
    cout<<a+f<<endl;
}

};
class drived2:public base
{
  public :
double f;
double g;
void display3(){
    cout<<"base2 inheredance"<<endl;
cout<<f+g<<endl;
cout<<a+b<<endl;
}
};
int main(){

drived2 ob1;
ob1.a=545;
ob1.b=545;
ob1.f=45454.12;
ob1.g=4545.12;
ob1.display3();
ob1.display();
drived ob2;
ob2.a=242;
ob2.f=545.2312;
ob2.display1();
    return 0;
}