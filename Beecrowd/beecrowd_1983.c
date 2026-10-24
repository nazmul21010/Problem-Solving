#include<stdio.h>
int main()
{
  int a,id;
  scanf("%d",&a);
  float s[a],max;int m[a];
  for(int i=0;i<a;i++){
    
    scanf("%d %f",&m[i],&s[i]);
  }
   max=s[0];
 for(int i=0;i<a;i++){
  
    if(max<s[i]){
    max=s[i];
    id=m[i];
    }
 }
 if(max<8.0){
printf("Minimum note not reached\n");
 }
else if(max>= 8.0 && max<=10.0){
printf("%d\n",id);
}
return 0;

}