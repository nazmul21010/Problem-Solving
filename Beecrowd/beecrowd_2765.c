#include<stdio.h>
#include<string.h>
int main()
{

    char str[500];
  fgets(str,500,stdin);
  int a=strlen(str);
  for(int i=0;i<a;i++){
  
  
 if(str[i]==',' ){
    printf("\n");
continue;

 }
printf("%c",str[i]);
 
  }
return 0;


}
