#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a,id;
  cin>>a;
  float s[a],max;int m[a];
  for(int i=0;i<a;i++){
    
    cin>>s[i];
    cin>>m[i];
  }
   max=s[0];
 for(int i=0;i<a;i++){
  
    if(max<s[i]){
    max=s[i];
    id=m[i];
    }
 }
 if(max<8.0){
cout<<"Minimum note not reached"<<endl;
 }
else if(max>= 8.0 && max<=10.0){
cout<<id<<endl;
}
return 0;

}