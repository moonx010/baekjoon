#include<bits/stdc++.h>
#define INF 0x3fffffff

using namespace std;

int n;
vector<pair<int, int>> v;
vector<int> x, y;
bool check[50];

int cal(int tx, int ty, int k){
    vector<int> tmp;
    for(int j=0;j<n;j++){
        tmp.push_back(abs(tx-x[j])+abs(ty-y[j]));
    }

    sort(tmp.begin(), tmp.end());

    int ret=0;
    for(int j=0;j<k;j++) ret+=tmp[j];

    return ret;
}

int main(void){
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        int tx, ty;
        scanf("%d %d", &tx, &ty);

        x.push_back(tx);
        y.push_back(ty);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            v.push_back({x[i], y[j]});
        }
    }

    for(int k=1;k<=n;k++){
        int ans=INF;
        for(int i=0;i<v.size();i++) ans=min(ans, cal(v[i].first, v[i].second, k));
        printf("%d ", ans);
    }

}