#include <stdio.h>
int main()
{
    int rows = 5; // Number of rows for the triangle
    int i, j;
    // Using nested for and while loops
    printf("Using nested for and while loops:\n");
    for (i = 1; i <= rows; i++)
    {
        j = 1;
        while (j <= i)
        {
            printf("*");
            j++;
        }
        printf("\n"); // Move to the next line
    }
    // Using nested for and do-while loops
    printf("Using nested for and do-while loops:\n");
    for (i = 1; i <= rows; i++)
    {
        j = 1;
        do
        {
            printf("*");
            j++;
        } while (j <= i);
        printf("\n"); // Move to the next line
    }
    return 0;
}