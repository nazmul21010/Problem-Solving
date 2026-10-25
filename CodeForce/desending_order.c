#include<stdio.h>
int main(){
int a;
scanf("%d",&a);
  int m[a];
  int temp;
  int i,j;
  for(i=0;i<a;i++){
    scanf("%d",&m[i]);
  }
  for(i=0;i<a;i++){
    for(j=i+1;j<a;j++){
       if(m[i]<m[j]){
            temp=m[i];
          m[i]=m[j];
          m[j]=temp;
       }
    }
  }
  for(i=0;i<a;i++){
    printf("%d ",m[i]);
  }

return 0;


}
