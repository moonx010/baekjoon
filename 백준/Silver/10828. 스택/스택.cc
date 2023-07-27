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
  vector<int> stack;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (s.compare("push") == 0) {
      int x;
      cin >> x;
      stack.push_back(x);
    } else if (s.compare("pop") == 0) {
      if (stack.size() > 0) {
        int x = stack.back();
        cout << x << "\n";
        stack.pop_back();
      } else
        cout << -1 << "\n";
    } else if (s.compare("size") == 0) {
      cout << stack.size() << "\n";
    } else if (s.compare("empty") == 0) {
      cout << (stack.empty() ? 1 : 0) << "\n";
    } else {
      if (stack.size() > 0) {
        cout << stack.back() << "\n";
      } else
        cout << -1 << "\n";
    }
  }
}
