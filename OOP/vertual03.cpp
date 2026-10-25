#include<bits/stdc++.h>
using namespace std;
class base{
int a;
public :
 virtual void  display(int x)
{
  cout<<"The number is :"<<x*x<<endl;

}
};

class drive : public base{
 
 int e ;
 public :
void display(int e)
{
    cout<<"This number is :"<<e+e*e<<endl;
}
};
class drive2:public drive{

 int x;
 void display(int x)
{
    cout<<"This number is :"<<x+x+x<<endl;
}

};
int main()
{
   base ob;
   base *p;
p=&ob;
p->display(45);
drive ob1;
p=&ob1;
p->display(12);
drive2 ob2;
p=&ob2;
p->display(5);
//ob2.display(21);

return 0;
}