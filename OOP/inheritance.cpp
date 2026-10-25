#include<iostream>
using namespace std;
class based{

public :
void call(){
    cout<<"Hello"<<endl;
}
virtual void sandMassage()=0;
};

class drive:public based
{
  public :
virtual void sandMassage()

{
   cout<<"Hi This is Rahim"<<endl;
}

};

int main()
{

drive *ob;

drive o;

ob=&o;

ob->sandMassage();
    return 0;
}