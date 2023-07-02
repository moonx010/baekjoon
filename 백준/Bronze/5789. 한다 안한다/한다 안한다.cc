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
    if(s[s.size() / 2] == s[(s.size() / 2) - 1]) cout << "Do-it\n";
    else cout << "Do-it-Not\n";
  }
}