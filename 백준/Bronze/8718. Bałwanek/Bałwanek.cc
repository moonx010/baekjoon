#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  a = a * 1000;
  b = b * 1000;

  if(b * 7 <= a) cout << b * 7;
  else if(b * 7 / 2 <= a) cout << b * 7 / 2;
  else if(b * 7 / 4 <= a) cout << b * 7 / 4;
  else cout << 0;
}
