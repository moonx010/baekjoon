#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int a, b, c;
  cin >> a >> b >> c;
  if(a + 2 * b + 3 * c >= 10) cout << "happy";
  else cout << "sad";
}