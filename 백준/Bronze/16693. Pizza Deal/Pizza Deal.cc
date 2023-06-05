#include <iostream>
#include <math.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  double a, b, c, d;
  cin >> a >> b >> c >> d;
  if(a / b < c * c * 3.14159265359 / d) cout << "Whole pizza";
  else cout << "Slice of pizza";
}
