#include<iostream>
using namespace std;
#include<string>
int main()
  {  
  
         string str;
   while (getline(cin, str))
   {
 
 if(str=="direita"){
 printf("frances\n");
 }
else if(str=="esquerda"){
printf("ingles\n");
}
else if(str=="nenhuma"){
printf("portugues\n");
}
else if(str=="as duas"){
printf("caiu\n");
}
   }
return 0;
  }