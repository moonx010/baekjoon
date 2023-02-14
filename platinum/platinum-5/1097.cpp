#include<bits/stdc++.h>

using namespace std;

int l, k, n;
int per, cnt;
char c[10][25];
bool check[10];
char g[250];

int period(void){
    for(int i=1;2*i<=l;i++){
        if(l%i) continue;
            bool key;
            for(int j=1;j<l/i;j++){
                key = strncmp(g, g+i*j, i);
                if(key) break;
            }

            if(!key) return i;
    }

    return l;
}

void DFS(int i){
    if(i==n&&period()==per) cnt++;

    for(int j=0;j<n;j++){
        if(!check[j]){
            check[j]=true;
            char tmp[250]={};
            strcpy(tmp, g);
            strcat(g, c[j]);
            DFS(i+1);
            strcpy(g, tmp);
            check[j]=false;
        }
    }
}

int main(void){
    scanf("%d", &n);
    
    int tmp;
    for(int i=0;i<n;i++){
        scanf("%s", c[i]);
        tmp = strlen(c[i]);
        l += tmp;
    }

    scanf("%d", &k);
    if(l%k!=0){
        printf("0");
        return 0;
    }

    per = l/k;

    DFS(0);

    printf("%d", cnt);

    return 0;
}