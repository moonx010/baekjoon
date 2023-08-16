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
    int y = 0, k = 0;
    for (int j = 0; j < 9; j++) {
      int a, b;
      cin >> a >> b;
      y += a;
      k += b;
    }
    if (y > k)
      cout << "Yonsei";
    else if (k > y)
      cout << "Korea";
    else
      cout << "Draw";
    cout << "\n";
  }
}