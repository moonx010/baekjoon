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
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x == 300)
      cout << 1;
    else if (x < 300 && x >= 275)
      cout << 2;
    else if (x < 275 && x >= 250)
      cout << 3;
    else
      cout << 4;
    cout << " ";
  }
}