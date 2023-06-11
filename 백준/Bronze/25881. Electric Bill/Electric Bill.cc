#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  int a, b, n;
  cin >> a >> b >> n;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    cout << x << " ";
    if(x <= 1000) cout << x * a;
    else cout << 1000 * a + (x - 1000) * b;
    cout << "\n";
  }
}