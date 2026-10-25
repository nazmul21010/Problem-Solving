#include<iostream>
using namespace std;
class myclass{
public :
int a;
string name;
void display1(){
    cout<<name<<endl<<a;
}
};

class drived:public myclass{

public :
int id;
void display(){

cout<<a<<endl<<name<<endl<<id<<endl;
}
};
class driver1:public drived{
    public:
    int x;
void display3(){
cout<<a<<endl<<name<<endl<<id<<" "<<endl<<x;
}
};
int main(){

driver1 ob1;

ob1.id=4512121;
ob1.name="Md.Nazmul islam";
ob1.a=5155215;
ob1.x=121212;
ob1.display3();
return 0;

}