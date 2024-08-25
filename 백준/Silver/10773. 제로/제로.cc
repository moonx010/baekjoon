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

  vector<int> stack;
  int n, ans = 0;

  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x == 0) {
      if (!stack.empty()) {
        ans -= stack.back();
        stack.pop_back();
      }
    } else {
      stack.push_back(x);
      ans += x;
    }
  }

  cout << ans;
}