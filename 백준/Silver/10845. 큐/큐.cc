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
  vector<int> queue;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (s.compare("push") == 0) {
      int x;
      cin >> x;
      queue.push_back(x);
    } else if (s.compare("pop") == 0) {
      if (queue.size() > 0) {
        int x = queue.front();
        cout << x << "\n";
        queue = vector<int>(queue.begin() + 1, queue.end());
      } else
        cout << -1 << "\n";
    } else if (s.compare("size") == 0) {
      cout << queue.size() << "\n";
    } else if (s.compare("empty") == 0) {
      cout << (queue.empty() ? 1 : 0) << "\n";
    } else if (s.compare("front") == 0) {
      if (queue.size() > 0) {
        cout << queue.front() << "\n";
      } else
        cout << -1 << "\n";
    } else {
      if (queue.size() > 0) {
        cout << queue.back() << "\n";
      } else
        cout << -1 << "\n";
    }
  }
}
