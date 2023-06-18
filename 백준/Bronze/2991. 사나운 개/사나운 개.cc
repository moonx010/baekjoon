#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int a, b, c, d, m[3];
  cin >> a >> b >> c >> d;
  for(int i = 0; i < 3; i++) {
    cin >> m[i];
    int ans = 0;
    if(m[i] % (a + b) <= a && m[i] % (a + b) != 0) ans++;
    if(m[i] % (c + d) <= c && m[i] % (c + d) != 0) ans++;
    cout << ans << "\n";
  }
  
}