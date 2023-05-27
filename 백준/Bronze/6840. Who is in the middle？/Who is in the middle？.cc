#include <stdio.h>

int main() {
  int a[3];
  int min, max;

  for(int i = 0; i < 3; i++) {
    scanf("%d", &a[i]);
  }

  min = a[0];
  max = a[0];

  for(int i = 0; i < 3; i++) {
    if(max < a[i]) max = a[i];
    if(min > a[i]) min = a[i];
  }

  for(int i = 0; i < 3; i++) {
    if(a[i] != min && a[i] != max) {
      printf("%d", a[i]);
      return 0;
    }
  }
}