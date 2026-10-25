#include<bits/stdc++.h>
using namespace std;
int main(){

int a,b;
int *p1,*p2;
cin>>a>>b;
p1=&a;
p2=&b;

call(*p1,*p2);
}
void call(int *a,int *b){


cout<<a+b;


}