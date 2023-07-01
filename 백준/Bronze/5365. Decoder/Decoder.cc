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
  string prev = " ";
  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if(s.size() < prev.size()) cout << " ";
    else cout << s[prev.size() - 1];
    prev = s;
  }
}