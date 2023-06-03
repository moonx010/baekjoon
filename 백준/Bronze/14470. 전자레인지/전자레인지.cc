#include <iostream>

using namespace std;

int main() {
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  if(a < 0) {
    cout << -1 * a * c + d + b * e;
  }
  else if(a == 0) cout << d + (b - a) * e;
  else cout << (b - a) * e;
}
