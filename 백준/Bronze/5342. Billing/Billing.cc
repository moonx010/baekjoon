#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  string s;
  double ans = 0;
  cin >> s;
  while(s.compare("EOI") != 0) {
    if(s.compare("Paper") == 0) ans += 57.99;
    if(s.compare("Printer") == 0) ans += 120.50;
    if(s.compare("Planners") == 0) ans += 31.25;
    if(s.compare("Binders") == 0) ans += 22.50;
    if(s.compare("Calendar") == 0) ans += 10.95;
    if(s.compare("Notebooks") == 0) ans += 11.20;
    if(s.compare("Ink") == 0) ans += 66.95;
    cin >> s;
  }
  cout << fixed;
  cout.precision(2);
  cout << "$" << ans;
}