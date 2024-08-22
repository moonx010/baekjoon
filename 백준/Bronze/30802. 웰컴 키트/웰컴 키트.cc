#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int shirts_needed(int t, int n) {
  if (n == 0)
    return 0;
  else
    return ((n - 1) / t) + 1;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, s, m, l, xl, xxl, xxxl, t, p;

  cin >> n >> s >> m >> l >> xl >> xxl >> xxxl >> t >> p;

  int a, b, c;

  a = shirts_needed(t, s) + shirts_needed(t, m) + shirts_needed(t, l) +
      shirts_needed(t, xl) + shirts_needed(t, xxl) + shirts_needed(t, xxxl);

  b = n / p;
  c = n % p;

  cout << a << "\n" << b << " " << c;
}