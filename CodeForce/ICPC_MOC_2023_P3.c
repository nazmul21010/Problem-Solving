#include<stdio.h>
int main()
{
    int test,sum=0,count=0;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        int test_case=0;
        scanf("%d",&test_case);
        int rens1=0,rens2=0;

        scanf("%d%d",&rens1,&rens2);

        int arr[test_case];

        for(int i=0;i<test_case;i++){
            scanf("%d",&arr[i]);
        }
            for(int i=0;i<test_case-1;i++){

                for(int j=1+i;j<test_case;j++){

                    sum=arr[i]+arr[j];

                    if(sum>=rens1 && sum<=rens2){
                        count++;
                    }
                }
            }
        printf("Case %d: %d\n",i+1,count);

    }
    return 0;
}
