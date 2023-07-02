#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int a, b;
  cin >> a >> b;
  for(int i = 1; i <= a; i++) {
    for(int j = 1; j<= b; j++) {
      if(a % i == 0 && b % j == 0) cout << i << " " << j << "\n";
    }
  }
}