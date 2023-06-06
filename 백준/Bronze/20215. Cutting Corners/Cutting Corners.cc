#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  double a, b;
  cin >> a >> b;
  cout << fixed;
  cout.precision(6);
  cout << a + b - sqrt(a*a + b * b);
}