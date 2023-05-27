#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  for(int i = 0; i < n; i++) {
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    if(a*b > c*d) printf("TelecomParisTech\n");
    else if(a*b < c*d) printf("Eurecom\n");
    else printf("Tie\n");
  }
}