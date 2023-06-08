#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int a, b;
  cin >> a >> b;
  cout << max(a + b, a - b) << "\n";
  cout << min(a + b, a - b);
}