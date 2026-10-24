#include<bits/stdc++.h>
using namespace std;
int main(){


int tc;
cin>>tc;
while(tc--){

int a,b,c,d;
cin>>a>>b>>c>>d;
int x=a+d;
int y=b+c;
if(y>x){
    cout<<"Gellyfish"<<endl;
}
else{
    cout<<"Flower"<<endl;
}

}
return 0;
}


