#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n, A = 0, B = 0;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    if(a > b) A += a + b;
    else if (a < b) B += a + b;
    else {
      A += a;
      B += b;
    }
  }
  cout << A << " " << B;
}