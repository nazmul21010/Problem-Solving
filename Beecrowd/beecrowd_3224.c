#include<stdio.h>
#include<string.h>;
int main(){
char str1[1000];
char str[1000];
scanf("%s%s",&str1,str);
int a=strlen(str1);
int b=strlen(str);

if(a>=b){
    printf("go\n");
}
else {
    printf("no\n");
}
return 0;
}