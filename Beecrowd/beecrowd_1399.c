#include <stdio.h>
int main()
{
  int n, m, u, l, r, v, p, res = 0;
  scanf("%d%d%d", &n, &m, &u);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (int j = 0; j < m; j++)
  {
    scanf("%d%d%d%d", &l, &r, &v, &p);
    int k = 0;
    for (int i = l - 1; i < r; i++)
    {
      if (arr[i] < v)
      {
        k++;
      }
    }
    res = (u * k) / (r - l + 1);
  }
  arr[p - 1] = res;
  for (int i = 0; i < n; i++)
  {
    printf("%d\n", arr[i]);
  }
  return 0;
}