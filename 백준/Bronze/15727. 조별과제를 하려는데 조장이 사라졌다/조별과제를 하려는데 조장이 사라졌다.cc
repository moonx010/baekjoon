#include <stdio.h>

int main() {
  int L;
  scanf("%d", &L);
  printf("%d", L / 5 + (L % 5 == 0 ? 0 : 1));
}