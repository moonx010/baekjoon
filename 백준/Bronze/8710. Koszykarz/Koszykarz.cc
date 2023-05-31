#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int ans = (b - a) / c + ((b - a) % c == 0 ? 0 : 1);
  cout << ans;
}
