#include<iostream>
using namespace std;
class overlode{
int a;
public:
overlode(){
    a=0;
}
overlode(int x){
    a=x;
}
void operator++(){
    a+=1;
}
void display(){
    cout<<"increment : "<<a<<endl;
}

friend void operator--(overlode&);
};
void operator--(overlode &m){

m.a-=1;
}
int main(){
overlode name(45);
name.display();
++name;
name.display();

--name;
name.display();

}