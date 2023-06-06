#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n;
  cin >> n;
  string x;
  getline(cin, x);
  for(int i = 0; i < n; i++) {
    string s;
    getline(cin, s);
    int cnt = 0;
    for(int j = 0; j < s.size(); j++) {
      if(s[j] == 'U') cnt++;
      else {
        break;
      }
    }
    cout << cnt << "\n";
  }
}