#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int a[3];
  
  for(int i = 0; i < 3; i++) {
    cin >> a[i];
  }

  sort(a, a + 3);

  if(a[1] - a[0] == a[2] - a[1]) {
    cout << 2 * a[2] - a[1];
  }
  else if (a[1] - a[0] > a[2] - a[1]) {
    cout << a[0] + a[2] - a[1];
  }
  else {
    cout << 2 * a[1] - a[0];
  }
}