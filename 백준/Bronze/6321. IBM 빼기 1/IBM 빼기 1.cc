#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n, ans = 0;
  cin >> n;
  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;
    cout << "String #" << i + 1 << "\n";
    for(int j = 0; j < s.size(); j++) {
      cout << (char)(((s[j] - 'A' + 1) % 26) + 'A');
    }
    cout << "\n\n";
  }
}