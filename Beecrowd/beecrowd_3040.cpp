#include<bits/stdc++.h>
using namespace std;
int main()
{
int a;
cin>>a;
for(int i=0;i<a;i++){
int m=0,n=0,o=0;
cin>>m>>n>>o;
if(m>=200 && m<=300 && n>=50 && o>=150)
cout<<"Sim"<<endl;
else cout<<"Nao"<<endl;
}
return 0;
}