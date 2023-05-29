#include <stdio.h>

int main() {
  int x, y;
  scanf("%d %d", &x, &y);
  if(x * (100 - y) / 100 >= 100) printf("0");
  else printf("1");
}
