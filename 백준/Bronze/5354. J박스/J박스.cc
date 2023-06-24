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
    for(int x = 0; x < n; x++) {
      for(int y = 0; y < n; y++) {
        if(x == 0 || y == 0 || x == n - 1 || y == n - 1) cout << "#";
        else cout << "J";
      }
      cout << "\n";
    }
    cout << "\n";
  }
}