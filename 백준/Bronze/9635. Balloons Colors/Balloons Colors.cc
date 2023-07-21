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
    int n, x, y;
    bool chk1 = false, chk2 = false;
    cin >> n >> x >> y;
    for (int j = 0; j < n; j++) {
      int k;
      cin >> k;
      if (j == 0 && k == x) chk1 = true;
      if (j == n - 1 && k == y) chk2 = true;
    }
    if (chk1 && chk2)
      cout << "BOTH\n";
    else if (chk1)
      cout << "EASY\n";
    else if (chk2)
      cout << "HARD\n";
    else
      cout << "OKAY\n";
  }
}