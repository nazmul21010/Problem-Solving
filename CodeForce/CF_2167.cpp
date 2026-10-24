#include<bits/stdc++.h>
using namespace std;
int main(){

int tc;
cin>>tc;
while(tc--)
{
   int n;
   cin>>n;
   int arr[n];

 for(int i=0;i<n;i++)
    {

        cin>>arr[i];
    }

    int c=0;
    for(int i=0;i<n;i++){

        if(arr[i]%2!=arr[i+1]%2){
            c++;
            cout<<c<<endl;
            break;
        }
    }

    if(c==1){
        sort(arr,arr+n);

        for(int i=0;i<n;i++){

            cout<<arr[i]<<" ";
        }
    }
    else if(c==0){
         for(int i=0;i<n;i++){

         cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    c=0;
}
return 0;
}
