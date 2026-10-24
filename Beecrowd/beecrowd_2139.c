#include<stdio.h>
int main()
{
    float a,b;
   while(scanf("%f%f",&a,&b)!=EOF)
{
  if(((a*30.417)+b)==390.004)
  printf("E natal!\n");
  else if((((a*30.417)+b)-390.004)==1)
printf("E vespera de natal!\n");
else if(((a*30.417)+b)>390.0)
 printf("Ja passou!\n");
 else if(390.004>(a*30.417)+b)
 printf("Faltam %.0f dias para o natal!\n",390.0004-((a*30.417)+b));
}
return 0;
}