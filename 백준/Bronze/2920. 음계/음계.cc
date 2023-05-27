#include <stdio.h>

int main()
{
  int a[8];
  for (int i = 0; i < 8; i++)
  {
    scanf("%d", &a[i]);
  }

  bool isAscending = true;
  bool isDescending = true;

  for (int i = 1; i < 8; i++)
  {
    if (a[i] > a[i - 1])
    {
      if (isDescending)
        isDescending = false;
    }
    else
    {
      if (isAscending)
        isAscending = false;
    }
  }

  if (isAscending)
  {
    printf("ascending");
    return 0;
  }
  if (isDescending)
  {
    printf("descending");
    return 0;
  }
  printf("mixed");
  return 0;
}