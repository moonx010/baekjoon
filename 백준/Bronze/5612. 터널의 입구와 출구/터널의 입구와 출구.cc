#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n, m, ans;
  cin >> n >> m;
  ans = m;
  for(int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    m += a - b;
    if(ans < m) ans = m;
    if(m < 0) {
      cout << 0;
      return 0;
    }
  }
  cout << ans;
}