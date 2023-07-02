#include<bits/stdc++.h>

using namespace std;

int num[6];
long long int sum, n;
vector<int> sums[5];

int main(void){
    scanf("%lld", &n);

    for(int i=0;i<6;i++){
        scanf("%d", num+i);
        sum+=num[i];
        sums[0].push_back(num[i]);
    }

    for(int a=0;a<6;a++){
        for(int b=a+1;b<6;b++){
            if(a+b==5) continue;
            sums[1].push_back(num[a]+num[b]);
        }
    }

    sums[2].push_back(num[0]+num[1]+num[2]);
    sums[2].push_back(num[0]+num[1]+num[3]);
    sums[2].push_back(num[0]+num[4]+num[2]);
    sums[2].push_back(num[0]+num[3]+num[4]);
    sums[2].push_back(num[5]+num[1]+num[2]);
    sums[2].push_back(num[5]+num[1]+num[3]);
    sums[2].push_back(num[5]+num[4]+num[2]);
    sums[2].push_back(num[5]+num[3]+num[4]);

    if(n==1){
        sort(num, num+6);
        printf("%lld", sum-num[5]);
    }

    else{
        long long int threes = 4;
        long long int twos = 4 + 8*(n-2);
        long long int ones = (n-1)*(n-2)*4 + (n-2)*(n-2);

        sort(sums[2].begin(), sums[2].end());
        sort(sums[1].begin(), sums[1].end());
        sort(sums[0].begin(), sums[0].end());

        printf("%lld\n", threes*sums[2][0] + twos*sums[1][0] + ones*sums[0][0]);
    }

    return 0;
}