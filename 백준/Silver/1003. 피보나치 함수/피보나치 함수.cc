#include <stdio.h>

int main() {
    int fibo[41];
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i <= 40; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++) {
        if(a[i] == 0) printf("1 0\n");
        else printf("%d %d\n", fibo[a[i] - 1], fibo[a[i]]);
    }
}