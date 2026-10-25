#include<bits/stdc++.h>
using namespace std;
class student{
public:
int a;
double b;
void display(){
    cout<<a<<endl<<b<<endl;
}
 student(int y,double x){
 a=y;
 b=x;

 }

};
int main(){
student nazmul(12,45.12);
nazmul.display();


}