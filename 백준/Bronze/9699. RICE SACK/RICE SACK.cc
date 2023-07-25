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
    int m = 0;
    for (int j = 0; j < 5; j++) {
      int x;
      cin >> x;
      m = max(m, x);
    }
    cout << "Case #" << i + 1 << ": " << m << "\n";
  }
}