#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  string s;
  cin >> s;
  while(s.compare("0") != 0) {
    int x = 0;
    for(int i = 0; i < s.size(); i++) {
      if(s[i] == '1') x += 2;
      else if(s[i] == '0') x += 4;
      else x += 3;
    }
    cout << x + s.size() + 1 << "\n";
    cin >> s;
  }
}