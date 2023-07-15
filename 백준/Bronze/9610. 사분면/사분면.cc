#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, axis = 0, q1 = 0, q2 = 0, q3 = 0, q4 = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    if (x == 0 || y == 0)
      axis++;
    else if (x > 0 && y > 0)
      q1++;
    else if (x < 0 && y > 0)
      q2++;
    else if (x < 0 && y < 0)
      q3++;
    else
      q4++;
  }

  cout << "Q1: " << q1 << "\n";
  cout << "Q2: " << q2 << "\n";
  cout << "Q3: " << q3 << "\n";
  cout << "Q4: " << q4 << "\n";
  cout << "AXIS: " << axis << "\n";
}