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
    int y, m, d;
    cin >> y >> m >> d;
    int x = (y * 12 + m) * 31 + d;
    int a = (2007 * 12 + 2) * 31 + 27;
    if (a - x >= 18 * 12 * 31)
      cout << "Yes\n";
    else
      cout << "No\n";
  }
}