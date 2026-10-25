#include<iostream>
using namespace std;
class name{

int a,b;
public:
name(int x,int y){

a=x;
b=y;
}
int get_a(){
    return a;
}
int get_b(){
    return b;
}



};

int main(){

name ob[4] ={name(1,2),name(3,4),name(7,8),name(9,5)};

name*p;
p=ob;

for(int i=0;i<4;i++)
{
    cout<<p->get_a()<<" ";
    cout<<p->get_b()<<endl;
    p++;
}
return 0;   
}