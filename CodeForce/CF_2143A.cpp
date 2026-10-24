#include<bits/stdc++.h>
using namespace std;
int main(){

int tt;
cin>>tt;
while(tt--){

int n;
cin>>n;
 vector<int>arr(n+1);

 for(int i=0;i<n;i++){
    cin>>arr[i];
 }


  sort(arr.begin(),arr.end(),greater<int>());
   cout<<"Sort by decending :"<<endl;

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
 cout<<endl;

  for(int i=0;i<n;i++){

        for(int j=0;j<=i;j++){
            arr[j]=arr[i]-1;
        }

  }

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

}


return 0;
}
