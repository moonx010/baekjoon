#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  char c;
  int cur = 0, cnt = 0;
  while(true) {
    if(cnt % 2 == 0) {
      int x;
      cin >> x;
      if(cnt == 0) cur = x;
      else {
        if(c == '+') cur += x;
        else if (c == '-') cur -= x;
        else if (c == '*') cur *= x;
        else cur /= x;
      }
    }
    else {
      cin >> c;
      if(c == '=') break;
    }
    cnt++;
  }
  cout << cur;
}