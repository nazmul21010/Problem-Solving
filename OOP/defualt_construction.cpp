#include<iostream>
using namespace std;
class student
{
    public :
    int a;
    double b;

void display(){
    cout<<a<<endl<<b<<endl;

}
student(int x,double y)
{
 a=x;
 b=y;

}
};

int main(){


  student alim(12,45.12);
alim.display();


}