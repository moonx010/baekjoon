#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int t;
  cin >> t;
  for(int i = 0; i < t; i++) {
    double x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    double d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    if(d == 0) {
      if(r1 == r2) cout << -1;
      else cout << 0;
    }
    else if (max(r1, r2) - min(r1, r2) > d) cout << 0;
    else if (max(r1, r2) - min(r1, r2) == d) cout << 1;
    else if(d > r1 + r2) cout << 0;
    else if(d == r1 + r2) cout << 1;
    else cout << 2;
    cout << "\n";
  }
}