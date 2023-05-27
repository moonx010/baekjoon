#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  printf("%d %d", n * 78 / 100, (n * 80 + ((n * 78 / 100) * 20)) / 100);
}