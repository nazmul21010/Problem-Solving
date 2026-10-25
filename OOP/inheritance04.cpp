#include<iostream>
using namespace std;
class myclass{
int x;
public:
void setx(int a)
{ 
  x=a;
}
void display()
{
    cout<<"base class : "<<x<<endl;
}
};

class myclass1:private myclass{
int y;
public:
void sety(int b)
{
    y=b;
}
void display1()
{
    cout<<"derived class : "<<y<<endl;
}
};
int main(){
myclass1 ob;
ob.sety(12);
ob.display1();

ob.setx(12);// it the private class not accese in object;
ob.display();// it the private class not accese in object;

return 0;
}