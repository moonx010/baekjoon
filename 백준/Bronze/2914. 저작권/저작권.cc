#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  double a, b;
  int ans = 0;
  cin >> a >> b;
  while(ans / a <= b - 1) {
    ans++;
  }
  cout << ans;
}