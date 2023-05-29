#include <stdio.h>

int main() {
  int a, b;
  scanf("%d", &a);
  scanf("%d", &b);

  int x = 8 * a + 3 * b;
  if(x >= 28) printf("%d", x - 28);
  else printf("0");
  
}
