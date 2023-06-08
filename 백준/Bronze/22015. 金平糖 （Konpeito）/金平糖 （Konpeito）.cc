#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int a, b, c;
  cin >> a >> b >> c;
  int ans = 3 * max(a, max(b, c)) - a - b - c;
  cout << ans;
}