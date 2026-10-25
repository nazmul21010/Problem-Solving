#include<stdio.h>
struct nazmul{
char ch[45];
int ID;
float salary;
char ch2[45];
};
int main()
{
    struct nazmul islam;
    printf("input illiment\n");
    scanf("%s",islam.ch);
    scanf("%d",&islam.ID);
    scanf("%f",&islam.salary);
    scanf("%s",islam.ch2);
    printf("output iliment\n");

    printf("%s\n",islam.ch);
     printf("%d\n",islam.ID);
      printf("%f\n",islam.salary);
       printf("%s\n",islam.ch2);
      return 0;
}
