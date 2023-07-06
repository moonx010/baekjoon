#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int a, b, c, v;
  cin >> a >> b >> c >> v;
  while (!(a == 0 && b == 0 && c == 0 && v == 0)) {
    if (a == 0) {
      a = v / (b * c);
    } else if (b == 0) {
      b = v / (a * c);
    } else if (c == 0) {
      c = v / (a * b);
    } else {
      v = a * b * c;
    }
    cout << a << " " << b << " " << c << " " << v << "\n";
    cin >> a >> b >> c >> v;
  }
}