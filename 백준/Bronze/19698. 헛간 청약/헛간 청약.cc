#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n, w, h, l;
  cin >> n >> w >> h >> l;
  int x = (w / l) * (h / l);
  cout << min(x, n);
}