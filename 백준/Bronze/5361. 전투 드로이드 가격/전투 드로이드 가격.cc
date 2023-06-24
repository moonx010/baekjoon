#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int t;
  double arr[5] = {350.34, 230.90, 190.55, 125.30, 180.90};
  cin >> t;
  cout << fixed;
  cout.precision(2);
  for(int i = 0; i < t; i++) {
    double ans = 0, x;
    for(int j = 0; j < 5; j++) {
      cin >> x;
      ans += arr[j] * x;
    }
    cout << "$" << ans << "\n";
  }
}