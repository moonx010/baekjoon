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
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n, tot = 0;
    double ans = 0;
    cin >> n;
    for (int j = 0; j < n; j++) {
      int x;
      double a;
      cin >> x >> a;
      tot += x;
      ans += x * a;
    }
    ans = ans / tot;
    cout << fixed;
    cout.precision(1);
    cout << tot << " " << ans << "\n";
  }
}