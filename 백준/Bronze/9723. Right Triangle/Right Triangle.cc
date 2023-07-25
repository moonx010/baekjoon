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
    int a, b, c;
    cin >> a >> b >> c;
    int m = max(a, max(b, c));
    cout << "Case #" << i + 1 << ": ";
    if (2 * m * m == a * a + b * b + c * c) {
      cout << "YES\n";
    } else
      cout << "NO\n";
  }
}