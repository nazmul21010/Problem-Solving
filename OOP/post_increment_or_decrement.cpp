#include<iostream>
using namespace std;
class overloding {
int a;
public:
overloding(){
    a=0;
}
overloding(int x){
    a=x;
}
void operator++(int){
    overloding mark(*this);
    a+=1;

}
friend void operator--(overloding &m,int)
{  overloding du(m);
  
    m.a-=1;
}
void display(){
    cout<<"increment : "<<a<<endl;
}

};
int main(){

overloding  m(45);
m++;
m.display();

m--;
m.display();

}