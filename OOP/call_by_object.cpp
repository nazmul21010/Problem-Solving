#include<iostream>
using namespace std;
class student
{
    public:
    int arr[12];
    double p;
    int a;
    char str[12];
    void diplay(){
        cout<<p<<endl<<str<<endl;
    }
};

int main(){
    student nazmul;
 cin>>nazmul.p;
 cin>>nazmul.str;
 nazmul.diplay();
 cin>>nazmul.a;
for(int i=0;i<nazmul.a;i++)
{
    cin>>nazmul.arr[i];
   
}
for(int i=0;i<nazmul.a;i++)
{
    cout<<nazmul.arr[i]<<endl;
    
    
}

  
}