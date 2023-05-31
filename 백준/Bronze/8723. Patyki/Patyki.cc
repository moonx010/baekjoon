#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int m = max(a, max(b, c));
  if(a == b && b == c) cout << 2;
  else if(2 * m * m == a * a + b * b + c * c) cout << 1;
  else cout << 0;
}
