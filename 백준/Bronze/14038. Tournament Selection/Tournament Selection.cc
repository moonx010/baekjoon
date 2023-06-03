#include <iostream>

using namespace std;

int main() {
  int cnt = 0;
  for(int i = 0; i < 6; i++) {
    string s;
    getline(cin, s);
    if(s == "W") cnt++;
  }
  int ans = cnt == 0 ? - 1 : 3 - (cnt - 1) / 2;
  cout << ans;
}
