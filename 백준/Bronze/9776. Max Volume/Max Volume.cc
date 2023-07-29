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
  double ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    char c;
    double r, h;
    cin >> c;
    if (c == 'C') {
      cin >> r >> h;
      ans = max(ans, 3.14159 * r * r * h / 3);
    } else if (c == 'L') {
      cin >> r >> h;
      ans = max(ans, 3.14159 * r * r * h);
    } else {
      cin >> r;
      ans = max(ans, 3.14159 * r * r * r * 4 / 3);
    }
  }

  cout << fixed;
  cout.precision(3);
  cout << ans;
}
