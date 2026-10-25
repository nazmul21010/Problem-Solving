#include<iostream>
using namespace std;

class  Student {
    public:
int arr[45];
int a;
};
   
int main(){

Student nazmul;
cin>>nazmul.a;
for(int i=0;i<nazmul.a;i++){
cin>>nazmul.arr[i];

}

for(int i=0;i<nazmul.a;i++){
cout<<nazmul.arr[i]<<" ";

}



return 0;
}