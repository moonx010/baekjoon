#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int x, y;
  cin >> x >> y;
  int a[x][y], row = 0, col = 0;
  for (int i = 0; i < x; i++) {
    string s;
    cin >> s;
    for (int j = 0; j < y; j++) {
      a[i][j] = s[j];
    }
  }

  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      if (a[i][j] == 'X') {
        row++;
        break;
      }
    }
  }

  for (int i = 0; i < y; i++) {
    for (int j = 0; j < x; j++) {
      if (a[j][i] == 'X') {
        col++;
        break;
      }
    }
  }

  cout << max(x - row, y - col);
}
