#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if(a == b || b == c || c == a) cout << "S";
  else {
    if(max(a, max(b, c)) * 2 == a + b + c) cout << "S";
    else cout << "N";
  }
}
