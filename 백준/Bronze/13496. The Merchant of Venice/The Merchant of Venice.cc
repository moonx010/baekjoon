#include <iostream>
using namespace std;

int main() {
  int k;
  cin >> k;
  for(int i = 0; i < k; i++) {
    int n, s, d;
    cout << "Data Set " << i + 1 << ":\n";
    cin >> n >> s >> d;
    int ans = 0;
    for(int j = 0; j < n; j++) {
      int a, b;
      cin >> a >> b;
      if(s * d >= a) ans += b;
    }
    cout << ans << "\n\n";
  }
}
