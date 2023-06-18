#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int a, b;
  string s;
  cin >> a >> s >> b;
  while(!(a == 0 && s.compare("W") == 0 && b ==0)) {
    if(s.compare("W") == 0) {
      if(a - b < -200) cout << "Not allowed";
      else cout << a - b;
    }
    else {
      cout << a + b;
    }
    cout << "\n";
    cin >> a >> s >> b;
  }
}