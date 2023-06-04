#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n, a, b, c, d;
  cin >> n >> a >> b >> c >> d;
  cout << min((((n - 1) / a) + 1) * b, (((n - 1) / c) + 1) * d);
}
