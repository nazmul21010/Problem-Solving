#include<iostream>
using namespace std;
class myclass{
    int x;
    public:
myclass(){
   x=0; 
}

myclass(int y){
    x=y;
}
int display(){
    return x;
}
};
int main(){
 myclass name[10];
 
myclass name1[10]={45,12,54,87,54,21,56,5,6,56};

for(int i=0;i<10;i++){

cout<<"name "<<name[i].display()<<endl;
cout<<"name1 "<<name1[i].display()<<endl;

}

}