#include <stdio.h>

int main() {
  for(int i = 0; i < 2; i ++) {
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int x = 6 * a + 3 * b + 2 * c + d + 2 * e;
    printf("%d ", x);
  }
}
