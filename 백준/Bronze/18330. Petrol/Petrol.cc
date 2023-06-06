#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int a, b;
  cin >> a >> b;
    int x = 60 + b;
    if(a <= x) cout << a * 1500;
    else cout << x * 1500 + (a - x) * 3000;
}