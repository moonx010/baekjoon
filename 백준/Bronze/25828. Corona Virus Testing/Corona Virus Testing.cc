#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  int a, b, c;
  cin >> a >> b >> c;
  int n = a * b;
  int x = b * c + a;
  if(n < x) cout << 1;
  else if (n > x) cout << 2;
  else cout << 0;
}