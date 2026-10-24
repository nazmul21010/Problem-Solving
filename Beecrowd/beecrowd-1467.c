#include <stdio.h>
#include <string.h>

int compare_strings(char str1[], char str2[])
{

    for (int i = 0; i < strlen(str1); i++)
    {
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
    }

    return strcmp(str1, str2);
}

int main()
{

    char string1[101], string2[101];
    fgets(string1, sizeof(string1), stdin);
    fgets(string2, sizeof(string2), stdin);

    string1[strcspn(string1, "\n")] = '\0';
    string2[strcspn(string2, "\n")] = '\0';
    int result = compare_strings(string1, string2);

    if (result < 0)
    {
        printf("-1\n");
    }
    else if (result > 0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}