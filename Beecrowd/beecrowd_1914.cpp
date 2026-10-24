#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){

int a;
cin>>a;
while(a--){

int a=0,b=0;
string str1;
cin>>str1;string str2;cin>>str2;
string str3;
cin>>str3;string str4;cin>>str4;
cin>>a;
cin>>b;

int sum=a+b;
if(sum%2==0 && strcmp(str1,"PAR")==0)
cout<<str1<<endl;
else if(sum%2!=0 && str4=="IMPAR")
cout<<str3<<endl;
else if(sum%2!=0 && str2=="IMPAR")
cout<<str1<<endl;
else if((sum%2==0 && str4=="PAR"))
cout<<str3<<endl;
}


return 0;

}