#include <stdio.h>

int main() {
  int x;
  int a[10000];
  int i = 0;
  scanf("%d", &x);

  while(x != 0) {
    a[i] = (x + 1) * x / 2;
    scanf("%d", &x);
    i++;
  }

  for(int j = 0; j < i; j++) {
    printf("%d\n", a[j]);
  }
}