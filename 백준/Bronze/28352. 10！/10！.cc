#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  long long int n, x = 1;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    x *= i;
  }
  cout << x / (7 * 24 * 3600);
}