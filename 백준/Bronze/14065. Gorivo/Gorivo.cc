#include <iostream>

using namespace std;

int main() {
  double x;
  cin >> x;
  cout << fixed;
  cout.precision(6);
  cout << (1 / x) * 3.785411784 * 100000 / 1609.344;
}
