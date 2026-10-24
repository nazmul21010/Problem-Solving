#include<iostream>
#include<conio.h>>
using namespace std;
int main(){
    float arr[12][12],sum=0;
    int a;
    cin>>a;
    char str[2];
    cin>>str;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin>>arr[i][j];
        }
    }
    for(int j=0;j<12;j++){
        sum+=arr[j][a];
    }
    if(str[0]=='S')
    cout<<sum<<endl;
    else if(str[0]=='M')
    cout<<sum/12.0<<endl;
    return 0;
}

