#include<bits/stdc++.h>

using namespace std;

int n, m;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int main(void){
    scanf("%d %d", &n, &m);

    printf("%d", m-gcd(n, m));
}