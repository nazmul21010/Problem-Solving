#include<bits/stdc++.h>
using namespace std;
int main()
{ int a,b,sum;
  cin>>a>>b;
  int arr[b];
  for(int i=0;i<b;i++){
    cin>>arr[i];

  }
  int count=0;
  for(int i=0;i<b;i++){
    int temp1=arr[i];
    int temp2=arr[i+1];
    sum=abs(temp1-temp2);
    if(sum<=a){
    count++;
    }
  }
if(count==b-1) 
cout<<"YOU WIN"<<endl;
else cout<<"GAME OVER"<<endl;
return 0;
}