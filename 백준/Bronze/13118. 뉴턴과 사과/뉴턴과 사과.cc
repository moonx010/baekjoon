#include <iostream>
using namespace std;

int main() {
  int a[4];
  for(int i = 0; i < 4; i++) {
    cin >> a[i];
  }
  int x, y, r;
  cin >> x >> y >> r;
  for(int i = 0; i < 4; i++) {
    if(a[i] == x) {
      cout << i + 1;
      return 0;
    }
  }

  cout << 0;
}
