#include<bits/stdc++.h>

using namespace std;

int c, n, mx=111111;
vector<pair<int, int>> promo;
long long int dp[111111];

int main(void){
    scanf("%d %d", &c, &n);

    for(int i=0;i<n;i++){
        int a, b;
        scanf("%d %d", &a, &b);
        promo.push_back({a, b});
    }

    for(int i=0;i<mx;i++){
        for(int j=0;j<n;j++){
            if(i+promo[j].first>=mx) break;
            dp[i+promo[j].first] = max(dp[i+promo[j].first], dp[i]+promo[j].second);
            //if(dp[i+promo[j].first]>=c) mx = min(mx, i + promo[j].first);
        }
    }

    int ans;
    for(int i=0;i<mx;i++){
        if(dp[i]>=c){
            ans = i;
            break;
        }
    }

    printf("%d", ans);
}