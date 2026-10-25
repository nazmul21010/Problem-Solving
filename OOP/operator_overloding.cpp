#include<iostream>
using namespace std;
class myclass{
int a;
int b;
public:
myclass(){
    a=0;
    b=0;
}
myclass(int x,int y){
a=x;    
b=y;
}

void display(){
    cout<<a<<endl<<b<<endl;
}
myclass operator+(myclass m){
myclass temp;
temp.a=a+m.a;
temp.b=b+m.b;
return temp;

}
};
int main(){
myclass number1(15,78);
myclass number2(45,89);

myclass number3=number1+number2;

number3.display();
return 0;
}