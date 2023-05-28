#include <stdio.h>

int main() {
  long long int n1, n2, n12;
  scanf("%lld %lld %lld", &n1, &n2, &n12);
  long long int x = ((n1 + 1) * (n2 + 1)) / (n12 + 1);
  printf("%lld", x - 1);
}