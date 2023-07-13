#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  double d, rh, rv;
  cin >> d >> rh >> rv;
  cout << fixed;
  cout.precision(2);
  while (!(d == 0 && rh == 0 && rv == 0)) {
    double w = 16 * d / sqrt(337);
    double h = 9 * w / 16;
    cout << "Horizontal DPI: " << rh / w << "\n";
    cout << "Vertical DPI: " << rv / h << "\n";
    cin >> d >> rh >> rv;
  }
}