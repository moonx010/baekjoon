#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if((s[s.size() - 1] - '0') % 2 == 0) cout << "even\n";
    else cout << "odd\n";
  }
}