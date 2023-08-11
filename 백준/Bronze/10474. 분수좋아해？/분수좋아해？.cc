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
  while (!(a == 0 || b == 0)) {
    cout << a / b << " " << a % b << " / " << b << "\n";
    cin >> a >> b;
  }
}