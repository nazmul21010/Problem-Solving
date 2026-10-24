#include<bits/stdc++.h>
using namespace std;
int main(){

int tt;
cin>>tt;

while(tt--){

 double n,p;

cin>>n;

p=ceil((n*n*)/0.25);

if(p==1)cout<<"2"<<endl;

else cout<<p<<endl;
}
return 0;
}
