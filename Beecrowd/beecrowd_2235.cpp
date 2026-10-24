#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
   cin>>a>>b>>c;
    if(b<abs(a-c) || a<b){
    cout<<"N"<<endl;
    }
    
    else if(b>=abs(a-c)){
    cout<<"S"<<endl;
    }
    return 0;


}