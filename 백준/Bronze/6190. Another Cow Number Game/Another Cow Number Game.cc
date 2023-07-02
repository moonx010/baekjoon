#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  long long int n, ans = 0;
  cin >> n;
  while(n != 1) {
    if(n % 2 == 0) n /= 2;
    else n = n * 3 + 1;
    ans++;
  }
  cout << ans;
}