#include<stdio.h>

int main() {
  long long int a, b;
  scanf("%lld %lld", &a, &b);

  long long int diff = a > b ? a - b : b - a;
  printf("%lld", diff);
}