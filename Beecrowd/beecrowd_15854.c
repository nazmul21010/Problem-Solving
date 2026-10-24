#include<stdio.h>
int main(){
int a;
scanf("%d",&a);
for(int i=0;i<a;i++){
    int x,y;
    scanf("%d%d",&x,&y);

    printf("%d cm2\n",x*(y/2));
}

return 0;

}