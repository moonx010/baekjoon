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
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }
    for (int j = 0; j <= i; j++) {
      cout << "* ";
    }
    cout << "\n";
  }
}