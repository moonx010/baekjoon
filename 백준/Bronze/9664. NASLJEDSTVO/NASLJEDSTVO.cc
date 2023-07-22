#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, o, x, ans;
  cin >> n >> o;
  x = o / (n - 1);
  ans = o + x;
  if (o - x * (n - 1) == 0)
    cout << ans - 1 << ' ' << ans << '\n';
  else
    cout << ans << ' ' << ans;
}