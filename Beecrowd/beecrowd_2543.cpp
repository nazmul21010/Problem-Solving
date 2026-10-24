#include<bits/stdc++.h>
using namespace std;
int main()
{  int a,b;
   while (scanf("%d %d",&a,&b)!=EOF)
   {  int arr[a],arr2[a];
   for(int i=0;i<a;i++){
   cin>>arr[i]>>arr2[i];
   }
    int count=0;
  for(int i=0;i<a;i++){
    if(arr2[i]==0 && arr[i]==b)
    count++;
  }
  cout<<count<<endl;
   }
return 0;
 }