#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int f(vector<int> a, int n, int m, int cur, int cnt) {
  if (cnt + cur > n) return INT32_MAX;
  if (m < 0) return INT32_MAX;
  if (cnt == 0) return m;

  int p = f(a, n, m - a.at(cur), cur + 1, cnt - 1);
  int q = f(a, n, m, cur + 1, cnt);

  return min(p, q);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, m;
  cin >> n >> m;
  vector<int> a;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a.push_back(x);
  }

  int ans = f(a, n, m, 0, 3);
  cout << m - ans;
}
