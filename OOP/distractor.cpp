#include<iostream>
#include<cstring>
using namespace std;
class myclass{
string name;
int ID;
int phone;

myclass(int id,int pho){
    //name=str;
    ID=id;
    phone=pho;
}
void out(){
    cout<<"this is id: "<<ID<<endl;
    cout<<"this is phone: "<<phone<<endl;

}


myclass::~myclass()
{
    cout<<"distractor is called"<<endl;
}
};

int main(){

myclass nazmul(12,45);
return 0;
}