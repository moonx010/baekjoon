#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n, ans = 1, a = 1;
  cin >> n;
  for(int i = 0; i < n; i++) {
    if(i % 2 == 1) a++;
    ans += a;
  }
  cout << ans;
}