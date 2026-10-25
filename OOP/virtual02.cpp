#include<iostream>
using namespace std;

class base
{
  public:
  int x;
  base(int a) {
    x=a;
    
    }
virtual void func()
_{
   cout<<"Using base class"<<endl;
  cout<<a*a*a<<endl;

}
};

class drive:public base
{
   public:
int b
drive(int m):base(m){}
void func(){



    
}

};

int main()
{



return 0;
}