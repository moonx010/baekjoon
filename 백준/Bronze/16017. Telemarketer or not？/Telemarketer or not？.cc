#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if(a >= 8 && b == c && d >= 8) cout << "ignore";
  else cout << "answer";
}
