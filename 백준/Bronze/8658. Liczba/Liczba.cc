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
  int m = n, M = 0;
  for (int i = 1; i < n; i++) {
    if (n % i != 0) {
      m = i;
      break;
    }
  }

  cout << m << " " << n - 1;
}