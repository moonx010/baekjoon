#include<bits/stdc++.h>
#define INF 0x3fffffff
#define MAX 2525

using namespace std;

int l;
char p[MAX];
int dp[MAX];
bool is_pal[MAX][MAX];

int main(void){
    scanf("%s", p);
    l = strlen(p);

    for(int len=1;len<=l;len++){
        for(int i=0;i<=l-len;i++){
            if(p[i]==p[i+len-1] && ((i+1>i+len-2)||is_pal[i+1][i+len-2])) is_pal[i][i+len-1] = true;
        }
    }

    for(int i=0;i<l;i++) dp[i] = INF;

    for(int i=l-1;i>=0;i--){
        for(int j=l-1;j>=i;j--){
            if(is_pal[i][j]) dp[i] = min(dp[i], dp[j+1]+1);
        }
    }

    printf("%d", dp[0]);
}