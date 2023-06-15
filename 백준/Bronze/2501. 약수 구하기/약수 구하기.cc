#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int a, b;
  cin >> a >> b;
  int cur = 0;
  for(int i = 1; i <= a; i++) {
    if(a % i == 0) cur++;
    if(cur == b) {
      cout << i;
      return 0;
    }
  }
  cout << 0;
}