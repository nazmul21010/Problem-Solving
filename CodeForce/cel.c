#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];
    int length;
    int comparison;

    // Copy str1 into str3
    strcpy(str3, str1);
    printf("str3 after strcpy: %s\n", str3);

    // Concatenate str1 and str2
    strcat(str1, str2);
    printf("str1 after strcat: %s\n", str1);

    // Calculate the length of str1
    length = strlen(str1);
    printf("Length of str1: %d\n", length);

    // Compare str2 and str3
    comparison = strcmp(str2, str3);
    if (comparison == 0)
    {
        printf("str2 and str3 are equal\n");
    }
    else if (comparison > 0)
    {
        printf("str2 is greater than str3\n");
    }
    else
    {
        printf("str2 is less than str3\n");
    }

    // Convert str2 to lowercase
    strlwr(str2);
    printf("str2 after strlwr: %s\n", str2);

    // Convert str2 to uppercase
    strupr(str2);
    printf("str2 after strupr: %s\n", str2);

    // Find the first occurrence of "lo" in str1
    char *pos = strstr(str1, "lo");
    if (pos != NULL)
    {
        printf("'lo' found in str1 at position: %ld\n", pos - str1);
    }
    else
    {
        printf("'lo' not found in str1\n");
    }
    return 0;
}