#include<stdio.h>
int main()
    {
  int a;
  scanf("%d",&a);
  int arr[a];
  for(int i=0;i<a;i++){
    scanf("%d",&arr[i]);
  }
  int count=0,count1=0,count2=0,count3=0;
for(int i=0;i<a;i++){
    if(arr[i]%2==0)
    count++;
    if(arr[i]%3==0)
    count1++;
    if(arr[i]%4==0)
    count2++;
    if(arr[i]%5==0)
    count3++;
}
printf("%d Multiplo(s) de 2\n",count);
printf("%d Multiplo(s) de 3\n",count1);
printf("%d Multiplo(s) de 4\n",count2);
printf("%d Multiplo(s) de 5\n",count3);
return 0;

    }
