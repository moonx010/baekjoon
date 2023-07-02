#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n, d;
  cin >> n >> d;
  while(!(n == 0 && d == 0)) {
    bool chk = false;
    int a[100] = {};
    for(int i = 0; i < d; i++) {
      bool t = true;
      for(int j = 0; j < n; j++) {
        int x;
        cin >> x;
        a[j] += x;
      }
    }
    for(int j = 0; j < n; j++) {
      if(a[j] == d) chk = true;
    }
    if(chk) cout << "yes\n";
    else cout << "no\n";
    cin >> n >> d;
  }
}