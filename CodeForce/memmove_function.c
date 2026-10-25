#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    typedef int nazmul;
    nazmul a;
    scanf("%d",&a);
     nazmul arr[a];
    for(int i=0;i<a;i++){
    scanf("%d",&arr[i]);
    }
   
    nazmul arr2 [a];

 memmove(arr2,arr,sizeof(nazmul)*a);
    for(int i=0;i<10;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}