#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n;
  cin >> n;
  int max = -1;
  for(int i = 0; i < n; i++) {
    int a, d, g;
    cin >> a >> d >> g;
    int ans;
    if(a == (d + g)) ans = 2 * a * (d + g);
    else ans = a * (d + g);
    if(max < ans) max = ans;
  }

  cout << max;
}