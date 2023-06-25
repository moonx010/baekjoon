#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n, ans = 0;
  cin >> n;
  for(int i = 1; i <= 500; i++) {
    for(int j = 1; j <= i; j++) {
      if(i * i - j * j == n) ans ++;
    }
  }
  cout << ans;
}