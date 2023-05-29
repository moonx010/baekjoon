#include <iostream>
using namespace std;

int main() {
  string n;
  int a, b;
  cin >> n >> a >> b;
  while(!(n == "#" && a == 0 && b == 0)) {
    if(a > 17 || b >= 80) {
      cout << n << " Senior\n";
    }
    else cout << n << " Junior\n";
    cin >> n >> a >> b;
  }
}
