#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    cout << "Data Set " << i + 1 << ":\n";
    if(a <= b) cout << "no drought\n\n";
    else {
      for(int x = 5 * b; x < a; x *= 5) {
        cout << "mega ";
      }
      cout << "drought\n\n";
    }
  }
}