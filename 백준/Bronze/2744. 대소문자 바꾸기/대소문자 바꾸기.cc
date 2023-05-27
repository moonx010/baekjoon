#include<stdio.h>

int main() {
  char str[101];
  scanf("%s", str);

  int i = 0;
  while(str[i]!= '\0') {
    if(str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
    else str[i] -= 32;
    i++;
  }

  printf("%s", str);
}