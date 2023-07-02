#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  string s;
  cin >> s;
  while(s.compare("0") != 0) {
    while(true) {
      int x = 0;
      for(int i = 0; i < s.size(); i++) {
        x += s[i] - '0';
      }
      if(x < 10) {
        cout << x << "\n";
        break;
      }
      s = to_string(x);
    }
    cin >> s;
    
  }
}