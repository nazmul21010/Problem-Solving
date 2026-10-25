#include<iostream>
using namespace std;
void display(int num[],int a){
  for(int i=0;i<a;i++){
  cout<<num[i]<<" ";
  }

}

int main(){

int a;
cin>>a;
int arr[a];
for(int i=0;i<a;i++)
{
    cin>>arr[i];
}
display(arr,a);


}