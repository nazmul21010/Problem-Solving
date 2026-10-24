#include <stdio.h>
#include <string.h>
#include <ctype.h>

int has_lowercase(const char str[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (islower(str[i]))
        {
            return 1;
        }
    }
    return 0;
}

int has_uppercase(const char str[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (isupper(str[i]))
        {
            return 1;
        }
    }
    return 0;
}

int has_digit(const char str[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (isdigit(str[i]))
        {
            return 1;
        }
    }
    return 0;
}

int has_invalid_characters(const char str[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (!isalnum(str[i]))
        {
            return 1;
        }
    }
    return 0;
}

int is_valid_password(const char str[])
{
    int length = strlen(str);

    if (length < 6 || length > 32)
    {
        return 0;
    }

    if (!has_lowercase(str, length))
    {
        return 0;
    }

    if (!has_uppercase(str, length))
    {
        return 0;
    }

    if (!has_digit(str, length))
    {
        return 0;
    }

    if (has_invalid_characters(str, length))
    {
        return 0;
    }

    return 1;
}

int main()
{
    char password[100];

    while (fgets(password, sizeof(password), stdin) != NULL)
    {

        password[strcspn(password, "\n")] = 0;

        if (is_valid_password(password))
        {
            printf("Senha valida.\n");
        }
        else
        {
            printf("Senha invalida.\n");
        }
    }

    return 0;
}
