#include<iostream>
using namespace std;

int main()
{
    typedef int nazmul;
    nazmul a;
    cin>>a;
    for(int i=0;i<a;i++){
        cout<<fabonacci(i);
    }
    return 0;
}
int fabonacci(int a){

if(a==0)
return 0;
else if(a==1)
return 1;
else 
return fabonacci(a-1)+fabonacci(a-2);

}