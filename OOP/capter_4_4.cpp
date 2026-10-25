#include<iostream>
using namespace std;
class saup 
{  
  int a;
  public:
  saup(int x){
    a=x;
  }
  int get_a()
{
    return a;
}
};

int main(){

saup obj[4][4]={1 ,5 ,8 ,7,
                8,5,6,9,
                 8,8,9,5,
                 7,8,9,25,
};

for(int i=0;i<4;i++){
  for(int j=0;j<4;j++){
     cout<<obj[i][j].get_a()<<" ";
     
  
  }
     cout<<endl;
}

return 0;

}