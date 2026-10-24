#include<iostream>
#include<string>
using namespace std;
int main(){
string str1;
string str;
cin>>str1>>str;
int a=str1.size();
int b=str.size();
if(a>=b)
cout<<"go"<<endl;
else cout<<"no"<<endl;
return 0;
}