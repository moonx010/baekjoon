#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    int a, b, ans = 0;
    cin >> a >> b;
    cout << "Case #" << i << ": ";
    int n = 1;
    while (n * n * n < a) n++;
    while (n * n * n <= b) {
      ans++;
      n++;
    }
    cout << ans << "\n";
  }
}