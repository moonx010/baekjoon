#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int a, b;
  cin >> a >> b;
  int M = max(a, b), m = min(a, b), cnt = 0;
  while (M != m) {
    M = M - m;
    int newM = max(M, m), newm = min(M, m);
    M = newM;
    m = newm;
    cnt++;
  }

  cout << cnt;
}