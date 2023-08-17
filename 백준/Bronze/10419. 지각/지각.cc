#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x, t = 0, ans = 0;
    cin >> x;
    while (t * (t + 1) <= x) {
      ans = t;
      t++;
    }

    cout << ans << "\n";
  }
}