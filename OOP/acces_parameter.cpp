#include<bits/stdc++.h>
using namespace std;
class acces
{
   public:
   int a;
   double b;
void pamiter()
{
    cout<<a<<endl<<b<<endl;
}
void display(int x,double p){
  a=x;
  b=p;
}
};
int main()
{
 acces nazmul;


  nazmul.display(454,12.54);
nazmul.pamiter();

}