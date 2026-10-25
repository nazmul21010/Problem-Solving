#include <stdio.h>
int main()
{
  int a, t;
  scanf("%d%d", &a, &t);
  int m[a];
  int temp;
  int i, j;
  printf("Enter input:\n");
  for (i = 0; i < a; i++)
  {
    scanf("%d", &m[i]);
  }
  for (i = 0; i < a - 1; i++)
  {
    for (j = i + 1; j < a; j++)
    {
      if (m[i] == t)
      {
        for (int k = j; k < a; k++)
        {
          m[k] = m[k + 1];
        }
        a--;
        j--;
      }
    }
  }
  printf("Enter output\n");
  for (i = 0; i < a; i++)
  {
    printf("%d ", m[i]);
  }

  return 0;
}
