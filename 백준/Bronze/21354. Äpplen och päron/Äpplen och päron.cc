#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int a, b;
  cin >> a >> b;
  if(7 * a > 13 * b) cout << "Axel";
  else if (7 * a < 13 * b) cout << "Petra";
  else cout << "lika";
}