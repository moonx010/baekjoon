#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, a = 0, b = 0;
  string s;
  cin >> n >> s;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'A')
      a++;
    else
      b++;
  }
  if (a > b)
    cout << 'A';
  else if (a < b)
    cout << 'B';
  else
    cout << "Tie";
}