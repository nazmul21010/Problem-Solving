#include <stdio.h>
#include <string.h>

int main()
{
    char num_str[10001];
    scanf("%s", num_str);

    int digit_count[10] = {0};

    for (int i = 0; i < strlen(num_str); i++)
    {
        
        int digit = num_str[i] - '0';

        
        digit_count[digit]++;
    }

 
    int max_digit = 0;
    for (int i = 1; i < 10; i++)
    {
        if (digit_count[i] > digit_count[max_digit])
        {
            max_digit = i;
        }
    }

    printf("%d\n", max_digit);

    return 0;
}