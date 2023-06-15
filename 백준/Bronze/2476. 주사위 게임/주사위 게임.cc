#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int M = 0, n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int a, b, c, x;
    cin >> a >> b >> c;
    if(a == b && b == c) {
      x = 10000 + a * 1000;
    }
    else if(a == b) {
      x = 1000 + 100 * a;
    }
    else if(c == b) {
      x = 1000 + 100 * b;
    }
    else if(a == c) {
      x = 1000 + 100 * a;
    }
    else {
      x = 100 * max(a, max(b, c));
    }
    if(x > M) M = x;
  }
  cout << M;
}