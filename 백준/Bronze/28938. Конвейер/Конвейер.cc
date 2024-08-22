#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    ans += x;
  }
  if (ans < 0) {
    cout << "Left";
  } else if (ans > 0) {
    cout << "Right";
  } else {
    cout << "Stay";
  }
}