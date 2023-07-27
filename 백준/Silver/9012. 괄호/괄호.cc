#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    vector<char> stack;
    for (int j = 0; j < s.length(); j++) {
      if (stack.size() == 0) {
        stack.push_back(s[j]);
        continue;
      }
      if (s[j] == '(')
        stack.push_back(s[j]);
      else {
        if (stack.back() == '(')
          stack.pop_back();
        else
          stack.push_back(s[j]);
      }
    }
    if (stack.size() > 0)
      cout << "NO\n";
    else
      cout << "YES\n";
  }
}
