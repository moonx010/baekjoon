#include <stdio.h>

int main() {
  int t, s;
  scanf("%d %d", &t, &s);
  if(!s && t >= 12 && t <= 16) printf("320");
  else printf("280");
}