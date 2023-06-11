#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  int a, b, c;
  cin >> a >> b >> c;
  int m = max(a, max(b, c));
  if(a + b + c == 2 * m) cout << 1;
  else if(a * b * c == m * m) cout << 2;
  else cout << 3;
}