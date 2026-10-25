#include<iostream>
using namespace std;
class myclass{
int a;
public:
myclass(int x=0){

a=x;
}

int get_x(){
    return a;
}

};
int main(){

myclass name(12);
myclass name1;
cout<<"frist function "<<name.get_x()<<endl;
cout<<"second function "<<name1.get_x()<<endl;
}