#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int a, b;
  cin >> a >> b;
  while(!(a == 0 && b == 0)) {
    if(a - b == 1) cout << 0 << " " << 0;
    else {
      if((a - b) % 2 == 1) {
        cout << (a - b - 3) / 2 << " " << 1;
      }
      else cout << (a - b) / 2 << " " << 0;
    }
    cout << "\n";
    cin >> a >> b;
  }
}