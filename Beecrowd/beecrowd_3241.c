#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
  int a;
  scanf("%d", &a);
  while (a--)
  {
    char str[100];
    scanf("%s", &str);
    int sum = 0;
    int d = strlen(str);
    if (strcmp(str, "P=NP") == 0)
    {
      printf("skipped\n");
    }
    else
    {
      for (int i = 0; i < d; i++)
      {
        if (str[i] != '+')
          sum = sum + (str[i] - '0');
      }
      printf("%d\n", sum);
    }
  }
  return 0;
}