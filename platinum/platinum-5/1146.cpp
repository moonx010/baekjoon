#include<cstdio>
int mil=1000000;
int n;
int dp[2][105];
int mem[105][105];

int com(int k, int r){
    if(r==0||k==r) return 1;

    if(!mem[k][r]){
        mem[k][r]=com(k-1, r-1)+com(k-1, r);
    }
    return mem[k][r]%mil;
}

int main(void){
    scanf("%d", &n);
    dp[0][0] = dp[1][0] = dp[0][1] = dp[1][1] = 1;

    if(n==1){
        printf("1");
        return 0;
    }

    for(int i=2;i<=n;i++){
        for(int j=0;j<i;j++){
            long int tmp = com(i-1, j);

            tmp*=dp[(j+1)%2][j];
            tmp%=mil;

            tmp*=dp[0][i-1-j];
            tmp%=mil;

            dp[(j+1)%2][i]+=tmp;
            dp[(j+1)%2][i]%=mil;
        }
    }

    printf("%d", (dp[0][n]+dp[1][n])%mil);
}