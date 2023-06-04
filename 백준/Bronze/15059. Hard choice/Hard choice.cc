#include <iostream>

using namespace std;

int main() {
  int a[3], b[3];
  for(int i = 0; i < 3; i++) {
    cin >> a[i];
  }

  for(int i = 0; i < 3; i++) {
    cin >> b[i];
  }
  int ans = 0;
  for(int i = 0; i < 3; i++) {
    ans += a[i] > b[i] ? 0 : b[i] - a[i];
  }

  cout << ans;
}
