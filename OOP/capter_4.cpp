#include<iostream>
using namespace std;
int main(){

class  sumation
{
    int num;
    long sum;
    public:

    void show_sum(){
        cout<<num<<" sumed is "<<sum<<endl;
    }

};

void summation::set_sum(int n)
    {
        int i;
        num=n;
        sum=0;
        for(int i=0;i<n;i++){

            sum+=i;
        }
    }




}