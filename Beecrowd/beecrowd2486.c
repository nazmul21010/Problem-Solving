#include<stdio.h>
int main(){
while (1)
{  
  int a;
  scanf("%d",&a);
  if(a==0)
  break;
for(int i=0;i<a;i++){
 int b;char str[50];
 scanf("%d",&b);
 gets(str);
calculate(b,str[50]);

} 
}
}
int calculate(int x,char string[50]){
int y,y1,y2,y3,y4,y5,y6,y7;
  if(strcmp(string,"suco de laranja")==0)
  {
    int y=x*120;
  }
if(strcmp(string,"morango fresco")==0)
  {
    int y1=x*85;
  }
  if(strcmp(string,"mamao")==0)
  {
    int y3=x*85;
  }
  if(strcmp(string,"goiaba vermelha")==0)
  {
    int y4=x*70;
  }
if(strcmp(string,"manga")==0)
  {
    int y5=x*56;
  }

  if(strcmp(string,"laranja")==0)
  {
    int y6=x*50;
  }
   if(strcmp(string,"laranja")==0)
  {
    int y7=x*34;

}


printf("%d",y+y2+y3+y4,y5,y6,y7);
}