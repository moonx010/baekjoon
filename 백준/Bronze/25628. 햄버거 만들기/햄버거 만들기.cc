#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int x, y;
  cin >> x >> y;
  cout << min(x / 2, y);
}