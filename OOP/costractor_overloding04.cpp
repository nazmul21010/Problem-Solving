#include<iostream>
using namespace std;

class overlode{
int x;
public:
overlode(){
    x=0;
}
overlode(int y){

x=y;

}
int red(){
    return x;
}
};
int main(){
 overlode*prt;
overlode ob(13);
prt=new overlode[10];
if(!prt)
{
    cout<<"Allocation error"<<endl;
    return 1;
    }
for(int i=0;i<10;i++){
    prt[i]=ob;
}
for(int i=0;i<10;i++)
{  
    cout<<"constrctor is called "<<prt[i].red()<<endl;

}

return 0;
}