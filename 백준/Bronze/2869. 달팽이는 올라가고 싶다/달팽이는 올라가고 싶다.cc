#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int shirts_needed(int t, int n) {
  if (n == 0)
    return 0;
  else
    return ((n - 1) / t) + 1;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int a, b, v;

  cin >> a >> b >> v;

  int days = (v - b - 1) / (a - b) + 1;

  cout << days;
}