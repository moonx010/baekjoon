#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, a = 100, b = 100;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    if (x > y) {
      b -= x;
    }
    if (y > x) {
      a -= y;
    }
  }
  cout << a << "\n" << b;
}
