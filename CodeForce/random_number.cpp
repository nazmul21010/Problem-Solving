#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){

while(true){
     int random,input;
 cout<<"Enter a number :*1 to 5*";
  cin>>input;
random =rand()%5 +1;
if(random==input){
cout<<"You have win"<<endl<<endl;
}
else {
 cout<<"You have lost .try again"<<endl;
 cout<<"win number is : "<<random<<endl<<endl;
}
}
return 0;
}