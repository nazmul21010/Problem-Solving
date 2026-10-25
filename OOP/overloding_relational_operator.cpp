#include<iostream>
using namespace std;
class myclass{
int a;int b;
public:
myclass(){
    a=0;b=0;
}
myclass(int x,int y){

a=x;
b=x;
}
int operator==(myclass ob);
int operator&&(myclass ob);


//int display()
};


int myclass::operator==(myclass ob){
    return a==ob.a && b==ob.b;
}

int myclass ::operator&&(myclass ob){
    return (a&&ob.a) && (b&&ob.b);
}

int main(){
myclass ob1(45,78),ob2(45,12),ob3(78,65),ob4(78,98);
if(ob1==ob2)
cout<<"ob1 is equals ob2"<<endl;
else cout<<" ob1 is deff ob2"<<endl;

if(ob3==ob4)
cout<<"ob3 is equals ob4"<<endl;
else cout<<" ob3 is deff ob4"<<endl;

if(ob1&&ob2)
cout<<"ob1 is && ob2"<<endl;
else cout<<" ob3 &&deff ob4"<<endl;

if(ob3&&ob4)
cout<<"ob3 is && ob4"<<endl;
else cout<<" ob3 &&deff ob4"<<endl;

return 0;
}