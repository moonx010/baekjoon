#include<bits/stdc++.h>

using namespace std;

int n, m;
vector<int> v[105];
bool check[105];
int took[105];
int ans;

void init(void){
    for(int i=1;i<=n;i++) check[i]=false;
}

bool DFS(int i){
    for(int j=0;j<v[i].size();j++){
        if(check[v[i][j]]) continue;
        check[v[i][j]]=true;

        if(!took[v[i][j]]||DFS(took[v[i][j]])){
            took[v[i][j]]=i;
            return true;
        }
    }

    return false;
}

int main(void){
    scanf("%d %d", &n, &m);

    for(int i=0;i<m;i++){
        int ti, tj;
        scanf("%d %d", &ti, &tj);
        v[ti].push_back(tj);
    }

    for(int i=1;i<=n;i++){
        init();
        ans+=DFS(i);
    }

    printf("%d", ans);
}