#include<bits/stdc++.h>
using namespace std;
class overloding{
 int a;
 public:
 overloding()
{
    a=0;
}

overloding(int x){

a=x;
}
int display(){
    return a;
}

};

int main()
{
   overloding ob1(10);
    overloding ob2(20);
 cout<<ob1.display()<<endl;
 cout<<ob2.display()<<endl;

return 0;
}
