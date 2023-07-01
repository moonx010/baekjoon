#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n;
  cin >> n;
  while(n != 0) {
    cout << (2 * n + 1) * (n + 1) * n / 6 << "\n";
    cin >> n;
  }
}