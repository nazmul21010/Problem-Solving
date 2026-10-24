#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
   int a;string str;char ch;
   cin>>a;int count=0,count1=0,count2=0,count3=0,count4=0;
   for(int i=0;i<a;i++){
  cin>>str>>ch;
  if(ch=='X')
   count++;
  if(ch=='H')
count1++;
if(ch=='E')
 count2++;
 if(ch=='A')
 count3++;
 if(ch=='M')
 count4++;
   }

cout<<count<<" Hobbit(s)"<<endl;
cout<<count1<<" Humano(s)"<<endl;
cout<<count2<<" Elfo(s)"<<endl;
cout<<count3<<" Anao(oes)"<<endl;
cout<<count4<<" Mago(s)"<<endl;
return 0;
}