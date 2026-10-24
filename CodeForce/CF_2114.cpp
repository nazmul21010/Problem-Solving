#include<bits/stdc++.h>
using namespace std;

void isNumber(int num){

int d=ceil(sqrt(num));

if(d*d==num){
    cout<<0<<" "<<d<<endl;
}
else
{
    cout<<-1<<endl;
}

}
int main(){

int tt;
cin>>tt;
while(tt--){
    int n;
    cin>>n;

    isNumber(n);
}
return 0;
}
