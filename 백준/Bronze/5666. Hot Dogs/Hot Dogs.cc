#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  double a, b;
  while(cin >> a >> b) {
    cout << fixed;
    cout.precision(2);
    cout << a / b << "\n";
  }
}