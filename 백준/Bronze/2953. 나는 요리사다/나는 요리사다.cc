#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int max = 0, pos = 0;
  for(int i = 0; i < 5; i++) {
    int t = 0;
    for(int j = 0; j < 4; j++) {
      int x;
      cin >> x;
      t += x;
    }
    if(t > max) {
      max = t;
      pos = i + 1;
    }
  }

  cout << pos << " " << max;
}