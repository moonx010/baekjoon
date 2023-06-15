#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n, s = 1, ans = 0;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if(x) {
      ans += s;
      s++;
    }
    else s = 1;
  }
  cout << ans;
}