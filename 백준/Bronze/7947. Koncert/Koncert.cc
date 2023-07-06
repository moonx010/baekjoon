#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    double a = 0, b = 0, c = 0, x, y, z;
    for (int i = 0; i < 10; i++) {
      cin >> x >> y >> z;
      a += x;
      b += y;
      c += z;
    }
    cout << (int)round(a / 10) << " " << (int)round(b / 10) << " "
         << (int)round(c / 10) << "\n";
  }
}