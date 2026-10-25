#include<iostream>
using namespace std;
class array
{    int a;
  public:
  array(int b){
    a=b;
  }
  int get_a(){
    return a;
  }


};

int main(){
array ob[4]={-5,9,8,5};
for(int i=0;i<4;i++)
{
    cout<<ob[i].get_a()<<endl;
}


}