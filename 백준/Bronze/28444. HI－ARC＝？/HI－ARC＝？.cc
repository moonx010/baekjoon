#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  cout << a * b - c * d * e;
}