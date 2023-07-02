#include<bits/stdc++.h>

using namespace std;
 
int mine[800][800];

int lu[800][800];
int ru[800][800];
int ld[800][800];
int rd[800][808];

int r, c, ans = 0;

int main(void){
    scanf("%d %d", &r, &c);

    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            char tmp;
            scanf(" %c", &tmp);
            mine[i][j] = tmp - '0';
        }
    }

    for(int i=r; i>=1; i--){
        for(int j=1; j<=c; j++){
            if(mine[i][j]){
                ld[i][j] = ld[i+1][j-1] + 1;
                rd[i][j] = rd[i+1][j+1] + 1;
            }
        }
    }
 
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            if(mine[i][j]){
                lu[i][j] = lu[i-1][j-1] + 1;
                ru[i][j] = ru[i-1][j+1] + 1;
            }
        }
    }

    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            for(int k=1; k<=min(ld[i][j],rd[i][j]); k++){
                if((i+2*(k-1))>r) continue;
                if(!mine[i+2*(k-1)][j]) continue;
                if(lu[i+2*(k-1)][j]>=k && ru[i+2*(k-1)][j]>=k) ans = max(ans, k);
            }

            for(int k=1; k<=min(ru[i][j],rd[i][j]); k++){
                if((j+2*(k-1))>c) continue;
                if(!mine[i][j+2*(k-1)]) continue;
                if(lu[i][j+2*(k-1)]>=k && ld[i][j+2*(k-1)]>=k) ans = max(ans, k);
            }
        }
    }

    printf("%d",ans);
}
