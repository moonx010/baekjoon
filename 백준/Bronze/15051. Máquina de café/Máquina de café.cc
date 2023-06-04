#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  cout << min(2 * (a + c), min(2 * (2 * a + b), 2 * (b + 2 * c)));
}
