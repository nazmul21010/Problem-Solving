#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *getEncryptedString(char *s, int k)
{
    int len = strlen(s);
    char *encrypted = (char *)malloc((len + 1) * sizeof(char));

    for (int i = 0; i < len; i++)
    {
        encrypted[i] = s[(i + k) % len];
    }
    encrypted[len] = '\0';

    return encrypted;
}

int main()
{
    char s[100];
    int k;
    scanf("%s", &s);
    scanf("%d", &k);
    char *encrypted = getEncryptedString(s, k);
    printf("Encrypted string: %s\n", encrypted);
    free(encrypted);
    return 0;
}
