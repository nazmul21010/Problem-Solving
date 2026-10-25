#include<iostream>
using namespace std;
void space(int count){
   for (int i=count;i>=count;count--){
    cout<<" "<<endl;
   }
}
void space(int count,char ch){
    for (int i=count;i>=count;count--){
    cout<<ch<<endl;
    }
}

int main(){

space(45);

space(20,'x');
return 0;
}