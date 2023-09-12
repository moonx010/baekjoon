#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int x, ans = 0;
  while (cin >> x) {
    ans += x;
  }

  cout << ans;
}