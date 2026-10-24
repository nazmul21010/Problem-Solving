#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;

for(int i=0;i<t;i++){

    int tt;
    cin>>tt;
    int arr[tt];
    for(int i=0;i<tt;i++){
        cin>>arr[i];
    }
    int sum1=0,sum2=0,sum3=0;

 int l=tt/2;
 int ll=tt-1;
 int r=tt-1;


 for(int i=0;i<l;i++){
    sum1+=arr[i];
 }
 for(int j=l;j<ll;j++){
    sum2+=arr[j];
 }
 for(int k=r;k<tt;k++){
    sum3+=arr[k];
 }

                int s1 = sum1 % 3;
                int s2 = sum2 % 3;
                int s3 = sum3 % 3;



   if ((s1 == s2 && s2 == s3) ||(s1 != s2 && s2 != s3 && s1 != s3))
{
   cout<<l<<" "<<r<<endl;
}


else{
    cout<<"0 0"<<endl;
}

}
}
