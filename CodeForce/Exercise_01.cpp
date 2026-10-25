#include<iostream>
using namespace std;
int dif(int a,int b){
    return a-b;
}
int dif(float a,float b){
    return a-b;
}
int main(){

cout<<dif(12,54)<<endl;
cout<<dif(45.12f,68.554f)<<endl;

}