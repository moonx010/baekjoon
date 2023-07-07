#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, ans = 0;
  cin >> n;
  char s[n];
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  for (int i = 0; i < n; i++) {
    char x;
    cin >> x;
    if (x == s[i]) ans++;
  }
  cout << ans;
}