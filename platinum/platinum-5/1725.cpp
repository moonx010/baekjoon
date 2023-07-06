#include<bits/stdc++.h>
#define INF 0x3fffffff

using namespace std;

int n;
int h[100001];
long long int ans = -1;
long long int seg[277777];

int segTree(int idx, int l, int r){
    if(l == r) return seg[idx] = l;

    int mid = (l + r) / 2;
    int leftIdx = segTree(2 * idx + 1, l, mid);
    int rightIdx = segTree(2 * idx + 2, mid + 1, r);

    return seg[idx] = h[leftIdx] > h[rightIdx] ? rightIdx : leftIdx;
}


int findMin(int idx, int sl, int sr, int l, int r){
    if(sr < l || r < sl) return n;
    if(l <= sl && sr <= r) return seg[idx];

    int mid = (sl + sr) / 2;
    int leftIdx = findMin(2 * idx + 1, sl, mid, l, r);
    int rightIdx = findMin(2 * idx + 2, mid + 1, sr, l, r);

    return h[leftIdx] < h[rightIdx] ? leftIdx : rightIdx;
}

void updateAns(int l, int r){
    if(l > r) return;

    int idx = findMin(0, 0, n - 1, l, r);
    ans = max(ans, (long long int)h[idx] * (r - l + 1));

    updateAns(l, idx - 1);
    updateAns(idx + 1, r);
}

int main(void){
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", h + i);
    }
    h[n] = INF;

    segTree(0, 0, n - 1);
    updateAns(0, n - 1);

    printf("%lld", ans);
}