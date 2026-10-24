#include<stdio.h>
int main(){
int a,i=0,x,y;
scanf("%i",&a);
for(int i=0;i<a;i++){
    scanf("%i%i",&x,&y);

    printf("%d cm2\n",(x*y)/2);
}

return 0;

}