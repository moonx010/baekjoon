#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int x;
  cin >> x;
  if(x / 10000 == 555) cout << "YES";
  else cout << "NO";
}