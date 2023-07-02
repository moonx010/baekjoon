#include<bits/stdc++.h>

using namespace std;

int n, root, del;
vector<int> tree[55];
queue<int> q;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.first < b.first;
}

int main(void){
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        int tmp;
        scanf("%d", &tmp);
        if(tmp == -1){
            root = i;
            continue;
        }
        tree[tmp].push_back(i);
    }

    scanf("%d", &del);

    int ans = 0;
    while(!q.empty()){
        int node = q.front();
        q.pop();

        if(node == del) continue;
        if(tree[node].empty()){
            ans++;
            continue;
        }
        
        for(int i=0;i<tree[node].size();i++){
            q.push(tree[node][i]);
        }
    }

    printf("%d", ans);
}