#include<iostream>
using namespace std;
class myclass{
int x;
public:
void myclass4(int a)
{
    x=a;
}
void display()
{
    cout<<"base class: "<<x<<endl;
}
};

class myclass1:public myclass{

int y;
public:
void myclass3(int b){
    y=b;
}

void display1(){

cout<<"drived class : "<<y<<endl;
}
};
int main()
{
myclass1 ob;
ob.myclass4(52152);
ob.display();

ob.myclass3(6574);
ob.display1();
return 0;
}