#include<bits/stdc++.h>

using namespace std;

int t;

int main(void){
    scanf("%d", &t);

    for(int i=0;i<t;i++){
        int x, y;
        scanf("%d %d", &x ,&y);

        int n = (int)(sqrt(y-x));
        
        if(y-x == n*n) printf("%d\n", 2*n-1);
        else if(y-x <= n*n+n) printf("%d\n", 2*n);
        else printf("%d\n", 2*n+1);
    }
}