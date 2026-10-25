#include<iostream>
using namespace std;

class  name
{
   int hight;
   int width;
   public:
   void area(int hight,int width){
   this-> hight=hight;
  this-> width=width;
   }
  void display(){
    cout<<"this is a value "<<hight*width<<endl;
  } 

};
int main()
{
  name obj;
  obj.area(54,2);
  obj.display();
return 0;

}