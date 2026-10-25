#include<iostream>
using namespace std;
class base{
    public:
    int x;
base(int a){
x=a;
} 
 virtual void fuc()

{
   cout<<"Using base version of fuc"<<endl;

  cout<<x*x<<endl;

}
};

class drive:public base
{

public:
drive(int x):base(x){}

void fuc()
{
    cout<<"using drive class"<<endl;
    cout<<x+x<<endl;
}

};
int main(){

base *p;
base ob(12);
drive d_ob(10);

p=&ob;
p->fuc();

p=&d_ob;
p->fuc();

    return 0;
}