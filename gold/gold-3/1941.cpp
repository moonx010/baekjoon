#include<bits/stdc++.h>

using namespace std;

int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};

char classroom[5][5];
bool check[5][5];
bool fcheck[5][5];
int ans;

void inc_ans(void){
    int cntY=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(check[i][j]) cntY += classroom[i][j] == 'Y';
        }
    }

    if(cntY >= 4) return;

    int x, y;
    for(int n=0;n<25;n++){
        if(check[n/5][n%5]){
            x = n/5;
            y = n%5;
            break;
        }
    }

    fcheck[x][y] = true;

    int N = 7;
    while(N--){
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                if(check[i][j] && !fcheck[i][j]){
                    for(int d=0;d<4;d++){
                        int nx = i + dx[d];
                        int ny = j + dy[d];
                        if(nx>=0 && nx<5 && ny>=0 && ny<5 && fcheck[nx][ny]) fcheck[i][j] = true;
                    }
                }
            }
        }   
    }

    int ret = 0;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            ret += fcheck[i][j];
            fcheck[i][j]=0;
        }
    }

    ans += ret==7;
}

void DFS(int mn, int k){
    if(k==7){
        inc_ans();
        return;
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(mn < 5*i+j && !check[i][j]){
                check[i][j] = true;
                DFS(5*i+j, k+1);
                check[i][j] = false;
            }
        }
    }
}

int main(void){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            char t;
            scanf(" %c", &t);
            classroom[i][j]=t;
        }
    }

    DFS(-1, 0);

    printf("%d", ans);
}