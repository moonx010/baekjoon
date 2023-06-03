#include <iostream>

using namespace std;

int main() {
  string s;
  getline(cin, s);
  if(s[0] + s[4] - '0' == s[8]) cout << "YES";
  else cout << "NO";
}
