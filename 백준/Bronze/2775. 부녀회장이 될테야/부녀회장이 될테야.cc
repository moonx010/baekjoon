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
    long long int x[15][15];
    for (int i = 1; i <= n; i++) {
      x[0][i] = i;
    }
    for (int floor = 1; floor <= k; floor++) {
      for (int d = 1; d <= n; d++) {
        if (d == 1)
          x[floor][d] = 1;
        else
          x[floor][d] = x[floor][d - 1] + x[floor - 1][d];
      }
    }
    cout << x[k][n] << "\n";
  }
}