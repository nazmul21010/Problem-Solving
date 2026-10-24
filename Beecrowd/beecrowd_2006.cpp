#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[5];int count=0,a;
  cin>>a;
  for(int i=0;i<=4;i++){
 cin>>arr[i];
  }
  for(int i=0;i<5;i++){
    if(arr[i]==a)
    count++;
  }
cout<<count<<endl;
return 0;
}