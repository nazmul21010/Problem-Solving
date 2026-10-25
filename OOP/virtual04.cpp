#include<iostream>
using namespace std;
class cat{
public:
 virtual void sound(){
    cout<<" Mauw Mauw Mauw "<<endl;
}

};
class dog : public cat{
public:
void sound()
{
    cout<<"Gaw Gaw Gaw"<<endl;
}

};

class fox: public dog{
public:
void sound()
{
    cout<<"thek thek thek"<<endl;
}

};
class kak:public fox
{  public:
    void sound(){
    cout<<"khau khau khau"<<endl;
    }

};
int main(){
    cat *p;
cat ob;
p=&ob;
p->sound();


dog ob1;
p=&ob1;
p->sound();


fox ob2;
p=&ob2;
p->sound();


kak ob3;
p=&ob3;
p->sound();

return 0;
}