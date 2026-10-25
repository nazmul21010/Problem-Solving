#include<iostream>
using namespace std;

class samp
{
    int a;
    public:
   void set_a(int n){
    a=n;
   }
  int get_a(){
    return a;
  }

};
int main(){

samp obj[4];
int i;
for(int i=0;i<4;i++)
{
   obj[i].set_a(i);
   
 for(int i=0;i<4;i++)
{
    cout<<obj[i].get_a()<<endl;

}

}
return 0;
}