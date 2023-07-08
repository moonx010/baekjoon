#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int k, n;
    cin >> k >> n;
    long long int x[15];
    for (int i = 1; i <= n; i++) {
      x[i] = i;
    }
    for (int floor = 1; floor <= k; floor++) {
      long long int m = 0;
      for (int d = 1; d <= n; d++) {
        m += x[d];
        x[d] = m;
      }
    }
    cout << x[n] << "\n";
  }
}