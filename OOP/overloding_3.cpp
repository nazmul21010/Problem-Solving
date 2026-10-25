#include<iostream>
using namespace std;
class date{
int day,month,year;
public:
date(char *str);
date (int x,int y,int o){
    day=x;
    month=y;
    year =o;
}
void display(){
    cout<<day<<endl;
    cout<<month<<endl;
    cout<<year<<endl;
}

};
date::date(char *str){
    sscanf(str,"%d%*c%d%*c%d",&day,&month,&year);
}
int main(){

date ob1("12/31/99");

date ob2(12,31,99);
ob1.display();
ob2.display();

return 0;
}