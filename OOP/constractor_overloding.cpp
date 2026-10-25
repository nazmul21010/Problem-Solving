#include<iostream>
using namespace std;
class constructor{

int a;
public:
constructor(){
a=0;
}
constructor(int x){
    a=x;
}
int display(){
    return a;
}
};
int main(){

constructor name(12);
cout<<name.display()<<endl;

}








