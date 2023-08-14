#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, a = 0, b = 0, c = 0;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    a += i;
    c += pow(i, 3);
  }
  b = a * a;
  cout << a << "\n" << b << "\n" << c;
}