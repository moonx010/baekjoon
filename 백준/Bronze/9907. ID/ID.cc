#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string s;
  char c[11] = {'J', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'Z'};
  int t = 0, n[7] = {2, 7, 6, 5, 4, 3, 2};
  cin >> s;
  for (int i = 0; i < 7; i++) {
    int x = s[i] - '0';
    t += n[i] * x;
  }
  cout << c[t % 11];
}