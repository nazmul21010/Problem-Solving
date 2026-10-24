#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    scanf("%d",&a);
   for(int i=0;i<a;i++){     
  char str1[100],str2[10],str3[100],str4[10];
  scanf("%s %s %s %s",&str1,&str2,&str3,&str4); 
int m=0,n=0,sum=0;
  scanf("%d %d",&m,&n);
 sum=m+n;
if(sum%2==0 && strcmp(str2,"PAR")==0)
 printf("%s\n",str1);
else if(sum%2!=0 && strcmp(str4,"IMPAR")==0)
printf("%s\n",str3);
else if(sum%2!=0 && strcmp(str2,"IMPAR")==0)
printf("%s\n",str1);
else if(sum%2==0 && strcmp(str4,"PAR")==0)
printf("%s\n",str3);
}

return 0;
}