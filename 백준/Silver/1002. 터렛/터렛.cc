#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int ans[n];
    for(int i = 0; i < n; i++) {
        int x1, y1, r1, x2, y2, r2;
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        if(x1 == x2 && y1 == y2 && r1 == r2) {
            ans[i] = -1;
            continue;
        }
        int d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        int r_sum = r1 + r2;
        int r_sum_square = r_sum * r_sum;
        int r_diff = r1 > r2 ? r1 - r2 : r2 - r1;
        int r_diff_square = r_diff * r_diff;
        if(r_sum_square < d) ans[i] = 0;
        else if(r_sum_square > d) {
            if(r_diff_square > d) ans[i] = 0;
            else if(r_diff_square < d) ans[i] = 2;
            else ans[i] = 1;
        }
        else ans[i] = 1;
    }

    for(int i = 0; i < n; i++) {
        printf("%d\n", ans[i]);
    }
}