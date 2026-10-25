#include<iostream>
using namespace std;

class catCount
{
   int c;
   public:
  virtual void sound(int x)
{
   cout<<"CatCount : "<<x<<endl;
}
};

class dogCount:public catCount{
int d;
 public:
 void sound(int x)
{
    cout<<"dogCount :"<<x++<<endl;
}

};

class foxCount: public dogCount
{ 
    int y;
public :
void sound()
{
    cout<<"foxCount : "<<y+10<<endl;
}

};
int main()
{
 
   catCount *p;
   catCount ob;
   p=&ob;
p->sound(52);


   dogCount ob2;
   p=&ob2;
p->sound(45);

  foxCount ob3;
   p=&ob3;
p->sound(75);

    return 0;
}