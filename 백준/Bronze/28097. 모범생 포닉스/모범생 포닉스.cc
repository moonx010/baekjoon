#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n;
  cin >> n;
  int t = 0;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    t += 8 + x;
    if(i == n - 1) t -= 8;
  }
  cout << t / 24 << " " << t % 24;
}