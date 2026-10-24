#include<bits/stdc++.h>
using namespace std;

int main(){


int tt;cin>>tt;

while(tt--){

int c=0;
    string str;
    cin>>str;
      int s=str.length();
    for(int i=0;i<s;i++){

       if(str[i]==str[i+1]){
     c++;
     break;
       }
    }


if(c==1){

     cout<<"1"<<endl;
}


     else{cout<<s<<endl;}

}
return 0;
}
