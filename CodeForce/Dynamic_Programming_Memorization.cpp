#include<bits/stdc++.h>
using namespace std;

vector<long long>memo;

long long fab_Memo(int n){

if(n<=1){
    return n;
}

if(memo[n]!=-1){
    return memo[n];
}

memo[n]=fab_Memo(n-1)+fab_Memo(n-2);
return memo[n];

}

int main(){

int n;

cout<<"Enter n: "<<endl;

cin>>n;

memo.assign(n+1,-1);

cout<<"Fibonacci Series :"<<endl;

cout<<fab_Memo(n)<<" ";

}
