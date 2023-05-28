#include <stdio.h>

int main() {
  int n;
  int count = 0;
  scanf("%d", &n);
  char c[n];
  scanf("%s", c);
  for(int i = 0; i < n; i++) {
    if(c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u') count++;
  }

  printf("%d", count);
}