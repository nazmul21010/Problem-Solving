#include<iostream>
using namespace std;
class code{

int id;
public:

code(){
    id=0;
}
code(int x){
    id=x;
}
code(code &y){
    id=y.id;
}
void display(){
    cout<<"the value of x is"<<id<<endl;

}
};
int main(){

    code a(100);
    code b(a);
    code c=a;

a.display();
b.display();
c.display();

}
