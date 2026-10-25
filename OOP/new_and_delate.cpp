#include<iostream>
using namespace std;
int main()
{
  int *ptr;
  ptr=new int[5];
  ptr[0]= 12;
  ptr[1]=5;
   ptr[2]=6;
    ptr[3]=9;
     ptr[4]=10;
     for(int i=0;i<6;i++){
  cout<<ptr[i]<<endl;
  delete [] (ptr);
     }


}