#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int s, a, b;
  cin >> s >> a >> b;
  if(s <= a) cout << 250;
  else {
    cout << 250 + (((s - a - 1) / b) + 1) * 100;
  }
}