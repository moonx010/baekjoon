#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int a[5];
  for (int i = 0; i < 5; i++) {
    cin >> a[i];
  }

  int n = 1;
  while (true) {
    int cnt = 0;
    for (int i = 0; i < 5; i++) {
      if (n % a[i] == 0) cnt++;
    }
    if (cnt >= 3) {
      cout << n;
      break;
    }
    n++;
  }
}
