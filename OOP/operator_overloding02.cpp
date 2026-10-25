#include<iostream>
using namespace std;
class myclass{
int a;
int b;
int c;
public:
myclass(){
    a=0;b=0;c=0;
}

myclass(int x,int y,int z){

a=x;
b=y;
c=z;
} 
myclass operator+(myclass m){

    myclass n;
    n.a=a+m.b+m.c;
    n.b=b+m.a+m.c;
    n.c=c+m.a+m.b;
    return n;
}
myclass operator-(myclass m){

    myclass n;
    n.a=a-m.b-m.c;
    n.b=b-m.a-m.c;
    n.c=c-m.a-m.b;
    return n;
}

myclass operator*(myclass m){

    myclass n;
    n.a=a*m.b*m.c;
    n.b=b*m.a*m.c;
    n.c=c*m.a*m.b;
    return n;
}

myclass operator/(myclass m){

    myclass n;
    n.a=a/m.b/m.c;
    n.b=b/m.a/m.c;
    n.c=c/m.a/m.b;
    return n;
}


void dislpay(){
    cout<<a<<endl<<b<<endl<<c<<endl;
    cout<<"sum of total number :"<<a+b+c<<endl;
}
};


int main(){
myclass number1(12,54,98);
myclass number2(45,98,65);
myclass number3(56,78,98);

myclass number4=number1+number2+number3;
number4.dislpay();
myclass number5=number1-number2-number3;
number5.dislpay();

myclass number6=number1*number2*number3;
number6.dislpay();

myclass number7=number1/number2/number3;
number7.dislpay();
return 0;

}