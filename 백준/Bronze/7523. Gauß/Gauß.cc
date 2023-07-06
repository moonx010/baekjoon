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
    long long int a, b;
    cin >> a >> b;
    cout << "Scenario #" << i << ":\n";
    cout << (b - a + 1) * (b + a) / 2 << "\n\n";
  }
}