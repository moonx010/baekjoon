#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int a, b, ans = 1;
  cin >> a >> b;
  for (int i = 0; i < b; i++) {
    ans *= a;
    a--;
  }
  for (int i = 1; i <= b; i++) {
    ans = ans / i;
  }
  cout << ans;
}