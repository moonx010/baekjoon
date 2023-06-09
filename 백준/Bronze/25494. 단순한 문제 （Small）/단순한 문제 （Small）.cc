#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    cout << min(a, min(b, c)) << "\n";
  }
}