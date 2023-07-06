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
  for (int i = 1; i <= n; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    cout << "Scenario #" << i << ":\n";
    int M = max(a, max(b, c));
    if (M * M * 2 == a * a + b * b + c * c)
      cout << "yes\n\n";
    else
      cout << "no\n\n";
  }
}