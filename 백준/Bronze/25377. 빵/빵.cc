#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n;
  cin >> n;
  int min = -1;
  for(int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    if(a > b) continue;
    else {
      if(min < 0 || b < min) min = b;
    }
  }

  cout << min;
}