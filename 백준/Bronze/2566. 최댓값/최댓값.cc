#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int x, y, max = -1;
  for(int i = 1; i <= 9; i++) {
    for(int j = 1; j <= 9; j++) {
      int k;
      cin >> k;
      if(k > max) {
        max = k;
        x = i;
        y = j;
      }
    }
  }

  cout << max << "\n" << x << " " << y;
}