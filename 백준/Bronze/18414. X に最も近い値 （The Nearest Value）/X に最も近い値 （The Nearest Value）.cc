#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int x, l, r;
  cin >> x >> l >> r;
  if(l <=x and x <= r) cout << x;
  else if(x < l) cout << l;
  else cout << r;
}