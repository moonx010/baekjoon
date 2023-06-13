#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  string x;
  cin >> x;
  bool m = false, o = false, b = false, i = false, s = false;
  for(int j = 0; j < x.size(); j++) {
    if(x[j] == 'M') m = true;
    else if(x[j] == 'O') o = true;
    else if(x[j] == 'B') b = true;
    else if(x[j] == 'I') i = true;
    else if(x[j] == 'S') s = true;
  }
  if(m && o && b && i && s) cout << "YES";
  else cout << "NO";
}