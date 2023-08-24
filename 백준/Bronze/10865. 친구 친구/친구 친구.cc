#include <iostream>
using namespace std;
int N, M,u,v,a[100001];
int main() {
    cin >> N >> M;
    for (int i = 1; i <= M; i++)
    {
        cin >> u >> v;
        a[u]++;
        a[v]++;
    }
    for (int i = 1; i <= N; i++)
    {
        cout << a[i] << '\n';
    }
}