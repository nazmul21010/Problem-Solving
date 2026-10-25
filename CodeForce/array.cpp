#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"input the array size\n";
    cin>>a;
    int arr[a];
    cout<<"Enter a array elliment\n";
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for(int i=0;i<a;i++){
   cout<<arr[i]<<" " ;
   
    }
    return 0;
}