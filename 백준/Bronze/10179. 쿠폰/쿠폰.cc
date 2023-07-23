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
    double x;
    cin >> x;
    cout << fixed;
    cout.precision(2);
    double ans = x * 4 / 5;
    cout << "$" << ans << "\n";
  }
}