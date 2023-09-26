#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int a, b, n, ans = 0;
  cin >> a >> b >> n;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    ans += max(a * x, b * y);
  }

  cout << ans;
}