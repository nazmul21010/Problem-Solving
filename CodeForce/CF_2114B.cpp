#include<bits/stdc++.h>
using namespace std;

int Good_Pair(string str,int len){

int k=0;

int half=len/2;

for(int i=0;i<half;i++){

    if(str[i]==str[len-i-1]){
        k++;
    }
}
return k;
}
int main()
{
    int tt;
    cin>>tt;
    while(tt--){
        int l,k;
        cin>>l>>k;

        string str;
        cin>>str;

        int x=Good_Pair(str,l);
        if(x==k){
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
