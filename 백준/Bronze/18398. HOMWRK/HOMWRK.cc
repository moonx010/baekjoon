#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int t;
  cin >> t;
  for(int i = 0; i < t; i++) {
    int n;
    cin >> n;
    for(int j = 0; j < n; j++) {
      int a, b;
      cin >> a >> b;
      cout << a + b << " " << a * b << "\n";
    }
  }
}