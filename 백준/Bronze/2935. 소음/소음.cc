#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  string a, b, x, ans;
  cin >> a >> x >> b;
  if(x.compare("*") == 0) {
    ans = "1";
    for(int i = 0; i < a.size() + b.size() - 2; i++) {
      ans.append("0");
    }
    cout << ans;
  }
  else {
    if(a.size() == b.size()) {
      ans = "2";
      for(int i = 0; i < a.size() - 1; i++) {
        ans.append("0");
      }
      cout << ans;
    }
    else {
      ans = "1";
      int l = max(a.size(), b.size()), s = min(a.size(), b.size());
      for(int i = 0; i < l - s - 1; i++) {
        ans.append("0");
      }
      ans.append("1");
      for(int i = 0; i < s - 1; i++) {
        ans.append("0");
      }
      cout << ans;
    }
  }
}