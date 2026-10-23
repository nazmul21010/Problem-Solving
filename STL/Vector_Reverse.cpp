#include<bits/stdc++.h>
using namespace std;
int main(){

vector<int>arr={4,8,14,0,1,7,3,9,10};

reverse(arr.begin(),arr.end());


cout<<"All Element Reverse :"<<endl;

for(auto u: arr){
    cout<<u<<" ";
}
cout<<endl<<"Back and Front : "<<endl;
cout<<arr.front()<<" " <<arr.back()<<endl;

cout<<endl<<"Delete last Element : "<<endl;
arr.pop_back();
for(auto u: arr){
    cout<<u<<" ";
}

cout<<endl<<"Delete Particular Element : "<<endl;

arr.erase(arr.begin()+2,arr.end()-2);
for(auto u:arr){
    cout<<u<<" ";
}
return 0;

}
