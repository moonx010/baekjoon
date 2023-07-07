#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k, a, b, ans = 0;
  cin >> n >> k >> a >> b;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    if ((x - a) * (x - a) + (y - b) * (y - b) > k * k) ans++;
  }
  cout << ans;
}