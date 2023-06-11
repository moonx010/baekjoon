#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	string s;
  cin >> s;
  int n;
  cin >> n;
  int count = 0;
  for(int i = 0; i < n; i++) {
    string t;
    cin >> t;
    if(s.compare(t) == 0) count++;
  }

  cout << count;
}