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
    int h, m;
    cin >> h >> m;
    int t = (h * 60 + m + 23 * 60 + 15) % (24 * 60);
    cout << "Case #" << i + 1 << ": " << t / 60 << " " << t % 60 << "\n";
  }
}