#include <stdio.h>

int main() {
  char a[1001];
  int n;
  scanf("%s", a);
  scanf("%d", &n);
  printf("%c", a[n - 1]);
}