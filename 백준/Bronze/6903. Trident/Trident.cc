#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t, s, h;
  cin >> t >> s >> h;
  for (int i = 0; i < t; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "*";
      if (j < 2) {
        for (int k = 0; k < s; k++) {
          cout << " ";
        }
      }
    }
    cout << "\n";
  }
  for (int i = 0; i < 3 + 2 * s; i++) {
    cout << "*";
  }
  cout << "\n";
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < 1 + s; j++) {
      cout << " ";
    }
    cout << "*\n";
  }
}