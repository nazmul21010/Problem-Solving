#include<iostream>
using namespace std;
void area(int a,int b){

cout<<"this is area : "<<a*b<<endl;

}
void area(int a,int b,int c){
    cout<<"this is area : "<<a*b*c<<endl;
}
int main(){
area(0,4);
area(12,45,98);
return 0;
}