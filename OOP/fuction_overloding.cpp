#include<iostream>
using namespace std;

void display(int p,int x)
{
    cout<<p*x<<endl;
}
void display(int x,int y,int z){
    cout<<x*y+z<<endl;
}

int main(){
display(12,45,87);
display(45,65);

}