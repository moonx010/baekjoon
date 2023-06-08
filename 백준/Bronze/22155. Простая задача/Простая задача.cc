#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    if((a <= 1 && b <= 2) || (a <= 2 && b <= 1)) cout << "Yes\n";
    else cout << "No\n";
  }
}