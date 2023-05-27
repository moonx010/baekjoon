#include<stdio.h>

int main() {
  int n, m;
  scanf("%d %d", &n, &m);

  int ans[n][m];
  for(int k = 0; k < 2; k++) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
          int x;
          scanf("%d", &x);
          if(!k) ans[i][j] = x;
          else ans[i][j] += x;
        }
      }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      printf("%d ", ans[i][j]);
    }
    printf("\n");
  }
}