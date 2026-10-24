#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",&str);
    int a=strlen(str);
    int count=0,count1=0;
for(int i=0;i<a;i++){
    if(str[i]=='1' && str[i+1]=='3'){
        count++;
    }    
}
if(count>0)
printf("%s es de Mala Suerte\n",str);
else printf("%s NO es de Mala Suerte\n",str);
return 0;
}
