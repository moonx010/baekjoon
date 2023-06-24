#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  long long int a, b;
  cin >> a >> b;
  while(!(a == 0 && b == 0)) {
    cout << 2 * a - b << "\n";
    cin >> a >> b;
  }
}