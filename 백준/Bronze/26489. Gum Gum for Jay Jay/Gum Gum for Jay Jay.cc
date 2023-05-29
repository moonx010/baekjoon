#include <iostream>
using namespace std;

int main() {
  string s;
  int cnt = 0;
  getline(cin, s);
  while(s.size() > 0) {
    cnt++;
    getline(cin, s);
  }
  cout << cnt;
}
