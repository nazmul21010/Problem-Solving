#include<iostream>
using namespace std;

class myclass{
    int a;
    public:
    myclass(){
        a=0;
    }
    myclass(int x){
        a=x;
        
    }
    void operator+=(int x){
        a=a+x;
    }
void operator-=(int x){
        a=a-x;
    }


void display(){

 cout<<"sum of the number: "<<a<<endl;
}
};


int main(){
    myclass a(45);
    a.display();
 a+=20;
a.display();
a-=54;
a.display();

}
