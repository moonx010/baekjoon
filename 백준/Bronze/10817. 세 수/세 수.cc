#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int a, b, c;
  cin >> a >> b >> c;
  cout << a + b + c - min(a, min(b, c)) - max(a, max(b, c));
}