#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, a, b, cur = 0, cnt = 0;
  cin >> n >> a >> b;
  while (cur <= n) {
    if (cnt % 2 == 0)
      cur += a;
    else
      cur += b;
    cnt++;
  }
  if (cnt % 2 == 1)
    cout << 1;
  else
    cout << 0;
}