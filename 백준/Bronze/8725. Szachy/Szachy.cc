#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int max = 0;
    for (int j = 0; j < n; j++) {
      int x;
      cin >> x;
      if (x > max) max = x;
    }
    ans += max;
  }
  cout << ans;
}