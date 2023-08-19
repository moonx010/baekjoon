#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  int x = 3 * a + 20 * b + 120 * c, y = 3 * d + 20 * e + 120 * f;
  if (x > y)
    cout << "Max";
  else if (y > x)
    cout << "Mel";
  else
    cout << "Draw";
}