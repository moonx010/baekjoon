#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int h, m;
  cin >> h >> m;
  for(int i = 1; i <= m; i++) {
    int cur = -6 * pow(i, 4) + h * pow(i, 3) + 2 * pow(i, 2) + i;
    if(cur <= 0) {
      cout << "The balloon first touches ground at hour: " << i;
      return 0;
    }
  }
  cout << "The balloon does not touch ground in the given time.";
}