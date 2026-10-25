#include<bits/stdc++.h>
using namespace std;
class name{
int x;
public:
name(){
    x=0;
}
name(int a){
x=a;
}

int get_a(){
    return x;
}

};

int main(){

name ob1[10];

name ob2[10]={1,5,5,6,89,7,4,5,2,2};


for(int i=0;i<10;i++){
cout<<"overloding of ob1 "<<i<<ob1[i].get_a()<<endl;
cout<<"overloding of ob2 "<<i<<ob2[i].get_a()<<endl;
}
}