#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int cur = 0, max = 0;
  for(int i = 0; i < 4; i++) {
    int a, b;
    cin >> a >> b;
    cur += b - a;
    if(cur > max) max = cur;
  }
  cout << max;
}