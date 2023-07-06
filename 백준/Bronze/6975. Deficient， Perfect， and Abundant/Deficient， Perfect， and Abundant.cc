#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x, sum = 0;
    cin >> x;
    for (int j = 1; j < x; j++) {
      if (x % j == 0) sum += j;
    }
    cout << x << " is a";
    if (x == sum)
      cout << " perfect";
    else if (x > sum)
      cout << " deficient";
    else
      cout << "n abundant";

    cout << " number.\n\n";
  }
}