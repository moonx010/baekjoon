#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  long long int arr[n];
  for(int i = 0; i < n; i++) {
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    arr[i] = a + b;
  }

  for(int i = 0; i < n; i++) {
    printf("%lld\n", arr[i]);
  }
}