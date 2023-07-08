#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  long long int n, ans = 0;
  string s;
  cin >> n >> s;
  for (int i = 0; i < n; i++) {
    int x = s[i] - 'a' + 1;
    for (int j = 0; j < i; j++) {
      x = (x * 31) % 1234567891;
    }
    ans += x;
  }
  cout << ans;
}