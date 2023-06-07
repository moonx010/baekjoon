#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  double a;
  cin >> a;
  cout << fixed;
  cout.precision(6);
  cout << sqrt(a * M_PI) * 2;
}