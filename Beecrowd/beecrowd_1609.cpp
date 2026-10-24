#include<bits/stdc++.h>
using namespace std;

int main(){
int a;
cin>>a;
while (a--)
{
    
int n,k,j,i,count=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

sort(arr,arr+n);

for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(arr[i]==arr[j])
{
  for( k=j;k<n;k++)
 arr[k]=arr[k+1];

n--;
j--;
} }
  }
  for(int i=0;i<n;i++){
     count++;
  }
 cout<<count<<endl;
  }
return 0;

}
