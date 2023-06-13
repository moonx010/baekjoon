#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n;
  cin >> n;
  int y = 0, m = 0;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    y += ((x / 30) + 1) * 10;
    m += ((x / 60) + 1) * 15;
  }
  if(y > m) cout << "M " << m;
  else if(y < m) cout << "Y " << y;
  else cout << "Y M " << m;
}