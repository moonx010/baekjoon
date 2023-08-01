#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  if (n % 10 == 0) {
    cout << n / 300 << " ";
    n = n % 300;
    cout << n / 60 << " ";
    n = n % 60;
    cout << n / 10;
  } else {
    cout << -1;
  }
}
