#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a;
   while(scanf("%d",&a)!=EOF)
   {

   
   float arr[a];
   for(int i=0;i<a;i++){
    cin>>arr[i];
   }
   for(int i=0;i<a-1;i++){
    for(int j=i+1;j<a;j++){
        if(arr[i]>arr[j]){
            float temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
   }
   for(int i=0;i<1;i++){
    cout<<fixed<<setprecision(2)<<arr[0]<<endl;
   }}
return 0;

}