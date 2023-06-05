#include <iostream>
#include <math.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  double a;
  cin >> a;
  cout << fixed;
  cout.precision(6);
  cout << 4 * sqrt(a);
}
