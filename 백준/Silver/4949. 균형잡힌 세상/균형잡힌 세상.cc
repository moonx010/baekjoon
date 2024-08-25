#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string s;

  while (true) {
    getline(cin, s);
    if (s == ".") break;

    vector<char> stack;
    bool ans = true;
    for (int i = 0; i < s.length(); i++) {
      if (s[i] == '(' || s[i] == '[')
        stack.push_back(s[i]);
      else {
        if (s[i] == ')') {
          if (!stack.empty() && stack.back() == '(')
            stack.pop_back();
          else {
            ans = false;
            break;
          }
        }
        if (s[i] == ']') {
          if (!stack.empty() && stack.back() == '[')
            stack.pop_back();
          else {
            ans = false;
            break;
          }
        }
      }
    }
    if (!stack.empty()) ans = false;

    if (!ans)
      cout << "no\n";
    else
      cout << "yes\n";
  }
}