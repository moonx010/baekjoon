#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int min, sum = 0;
  for(int i = 0; i < 7; i++) {
    int x;
    cin >> x;
    if(x % 2 == 1) {
      if(sum == 0) min = x;
      else {
        if(min > x) min = x;
      }
      sum += x;
    }
  }

  if(sum > 0) cout << sum << "\n" << min;
  else cout << -1;
}