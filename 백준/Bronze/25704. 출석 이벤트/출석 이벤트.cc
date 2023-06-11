#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  int a, b;
  cin >> a >> b;
  int x;
  int ans = b;
  if(a >= 5) ans = min(ans, b - 500);
  if(a >= 10) ans = min(ans, b * 9 / 10);
  if(a >= 15) ans = min(ans, b - 2000);
  if(a >= 20) ans = min(ans, b * 3 / 4);
  cout << max(0, ans);
}