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
    ans += (s[i] - 'a' + 1) * pow(31, i);
  }
  cout << ans;
}