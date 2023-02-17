#include<bits/stdc++.h>

using namespace std;

int n, m, p;
bool knows[51];

queue<int> update;
vector<int> party[50];

void init(void){
    scanf("%d %d", &n, &p);
    scanf("%d", &m);

    for(int i = 1; i <= n; i++) knows[i] = false;

    while(m--){
        int temp;
        scanf("%d", &temp);
        knows[temp] = true;
    }

    for(int i = 0; i < p; i++){
        int pl;
        scanf("%d", &pl);
        party[i].push_back(pl);

        for(int j = 0; j < pl; j++){
            int temp;
            scanf("%d", &temp);
            party[i].push_back(temp);
        }
    }
}

void find(void){
    for(int i = 0; i < p; i++){
        int pl = party[i][0];
        int key = false;

        for(int j = 1; j <= pl; j++) key |= knows[party[i][j]];

        if(key){
            for(int j = 1; j <= pl; j++){
                if(!knows[party[i][j]]){
                    update.push(party[i][j]);
                    knows[party[i][j]] = true;
                }
            }
        }
    }
}

void count(void){
    int cnt = 0;

    for(int i = 0; i < p; i++){
        cnt += knows[party[i][1]];
    }

    printf("%d", p - cnt);
}

int main(void){

    init();

    while(true){
        find();
        if(update.empty()) break;
        while(!update.empty()) update.pop();
    }

    count();
}