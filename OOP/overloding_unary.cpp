#include<iostream>
using namespace std;
class Myclass {

int a,b;
public:
Myclass (){
    a=0;
    b=0;
}
Myclass (int x,int y){
    a=x;
    b=y;
}
void get_a(int &i,int &j){
    i=a;
    j=b;
}

Myclass operator++(int notused);

};

Myclass Myclass::operator++(int notused){
    a++;
    b++;
}
int main(){
Myclass x(12,78);
int a,b;
x++;
x.get_a(a,b);
cout<<a<<endl<<b<<endl;
return 0;
}