#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  a = a == 0 ? 0 : a * -1 + b;
  c = c == 0 ? 0 : c * -1 + d;
  int cur = c;

  while(cur % b != a) {
    cur += d;
  }

  cout << cur;
}