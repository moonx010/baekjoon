#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int t;
  cin >> t;
  for(int i = 0; i < t; i++) {
    int n;
    cin >> n;
    cout << "Pairs for " << n << ": ";
    for(int x = 1; x <= n / 2; x++) {
      int y = n - x;
      if(x == y) break;
      if(x > 1) cout << ", ";
      cout << x << " " << y;
    }
    cout << "\n";
  }
}