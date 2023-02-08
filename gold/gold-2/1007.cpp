#include<bits/stdc++.h>
#define INF DBL_MAX

using namespace std;

int t;
bool check[22];
double mn;
queue<double> ans;

void check_mn(int n, vector<pair<int, int>> *v){
    long long int x=0, y=0;
    for(int i=0;i<n;i++){
        if(check[i]){
            x += v[0][i].first;
            y += v[0][i].second;
        }

        else{
            x -= v[0][i].first;
            y -= v[0][i].second;
        }
    }

    mn = min(mn, sqrt(x*x+y*y));
}

void DFS(int n, vector<pair<int, int>> *v, int m, int k){
    if(k==n/2){
        check_mn(n, v);
        return;
    }

    for(int i=m;i<n;i++){
        check[i] = true;
        DFS(n, v, i+1, k+1);
        check[i] = false;
    }
}

int main(void){
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        vector<pair<int, int>> v;
        pair<int, int> tmp;
        for(int i=0;i<n;i++){
            int x, y;
            scanf("%d %d", &x, &y);
            tmp.first = x;
            tmp.second = y;
            v.push_back(tmp);
        }

        mn = INF;

        DFS(n, &v, 0, 0);
        ans.push(mn);
    }

    while(!ans.empty()){
        printf("%.12lf\n", ans.front());
        ans.pop();
    }

    return 0;
}