#include<iostream>
using namespace std;
class lode
{
int a;
int b;
public:
    
   void sum(int e,int x){
  cout<<e+x<<endl;
   }
   void sum(double x,double c){
    cout<<x+c<<endl;
   }

};

int main(){
lode a;

a.sum(45,21);
a.sum(4.4,45.98);

}