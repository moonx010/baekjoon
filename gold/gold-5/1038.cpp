#include<bits/stdc++.h>

using namespace std;

queue<int> ans;

int com(int n, int r){
    if(n==0&&r==0) return 1;
    if(n<r || n==0) return 0;
    int x = 1;
    for(int i=n;i>r;i--) x*=i;
    for(int i=1;i<=n-r;i++) x/=i;

    return x;
}

void DFS(int m, int t, int c){
    if(t==0) return;

    for(int i=0;i<m;i++){
        if(c > com(i, t-1)) c -= com(i, t-1);
        else{
            ans.push(i);
            DFS(i, t-1, c);
            break;
        }
    }
}

int n;

int main(void){
    scanf("%d", &n);

    if(n == 0){
        printf("0\n");
        return 0;
    }

    int i=1, c=-1, tc;
    while(i<=10){
        tc=c;
        c += com(10, i);
        if(c>=n) break;
        i++;
    }

    if(i==11){
        printf("-1\n");
        return 0;
    }

    DFS(10, i, n-tc);

    while(!ans.empty()){
        printf("%d", ans.front());
        ans.pop();
    }
}
