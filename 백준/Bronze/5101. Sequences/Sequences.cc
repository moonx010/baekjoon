#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int a, b, c;
  cin >> a >> b >> c;
  while(!(a == 0 && b == 0 && c == 0)) {
    if((c - a) % b == 0) {
      if(b == 0) cout << "X";
      else if((c - a) / b < 0) cout << "X";
      else cout << 1 + (c - a) / b;
    }
    else cout << "X";
    cout << "\n";
    cin >> a >> b >> c;
  }
}