#include<Stdio.h>
int main()
{
    int m,n;
    printf("Enter array size input\n");
    scanf("%d %d",&m,&n);
    int arr1[m][n];
    int arr2[m][n];
    int sum[m][n];
    int i,j,k;
    printf("first array input\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("second array\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
           sum[i][j]=0;
           for(k=0;k<n;k++){
            sum[i][j]=sum[i][j]+arr1[i][k]*arr2[k][j];
           }
        }
    }
    printf("\n");
    printf("Multiply mattrex\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }


    return 0;

}
