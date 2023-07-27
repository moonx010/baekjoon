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
  string s[n];
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  for (int i = 0; i < s[0].length(); i++) {
    bool chk = true;
    char x = s[0][i];
    for (int j = 1; j < n; j++) {
      if (x != s[j][i]) {
        chk = false;
        break;
      }
    }
    if (chk)
      cout << x;
    else
      cout << "?";
  }
}