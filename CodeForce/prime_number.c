#include <stdio.h>
#include <stdbool.h>
bool is_prime(int a);
int main(void)
{
  int a;
  int arr[a];
  scanf("%d", &a);
  for (int i = 1; i <= a; i++)
  {
    if (is_prime(i))
    {
      arr[i] = i;
      for (int i = 1; i <= 1; i++)
      {
        printf("%d", arr[i]);
            }
    }
  }
  return 0;
}
bool is_prime(int a)
{
  if (a <= 1)
    return false;
  for (int i = 2; i <= (a / 2); i++)
    if (a % i == 0)
      return false;
  return true;
}