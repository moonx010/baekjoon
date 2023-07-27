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
  vector<int> deque;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (s.compare("push_back") == 0) {
      int x;
      cin >> x;
      deque.push_back(x);
    } else if (s.compare("push_front") == 0) {
      int x;
      cin >> x;
      vector<int> new_deque;
      new_deque.push_back(x);
      for (int i = 0; i < deque.size(); i++) {
        new_deque.push_back(deque.at(i));
      }
      deque = new_deque;
    } else if (s.compare("pop_front") == 0) {
      if (deque.size() > 0) {
        int x = deque.front();
        cout << x << "\n";
        deque = vector<int>(deque.begin() + 1, deque.end());
      } else
        cout << -1 << "\n";
    } else if (s.compare("pop_back") == 0) {
      if (deque.size() > 0) {
        int x = deque.back();
        cout << x << "\n";
        deque.pop_back();
      } else
        cout << -1 << "\n";
    } else if (s.compare("size") == 0) {
      cout << deque.size() << "\n";
    } else if (s.compare("empty") == 0) {
      cout << (deque.empty() ? 1 : 0) << "\n";
    } else if (s.compare("front") == 0) {
      if (deque.size() > 0) {
        cout << deque.front() << "\n";
      } else
        cout << -1 << "\n";
    } else {
      if (deque.size() > 0) {
        cout << deque.back() << "\n";
      } else
        cout << -1 << "\n";
    }
  }
}
