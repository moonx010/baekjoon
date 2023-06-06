#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int a, b, c;
  cin >> a >> b >> c;
  int x = min(a, min(b, c));
  if(a + b + c >= 100) cout << "OK";
  else if(x == a) cout << "Soongsil";
  else if(x == b) cout << "Korea";
  else cout << "Hanyang";
}