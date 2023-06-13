#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n, d = 0, p = 0;
  cin >> n;
  bool chk = false;
  for(int i = 0; i < n; i++) {
    char c;
    cin >> c;
    if(chk) continue;
    if(c == 'D') d++;
    else p++;
    if(d - p > 1 || d - p < -1) {
      chk = true;
    }
  }
  cout << d << ":" << p;
}