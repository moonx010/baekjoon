#include <iostream>
using namespace std;

int main() {
  string s;
  int a[26] = {0};
  getline(cin, s);
  for(int i = 0; i < s.size(); i++) {
    a[s[i] - 'a'] += 1;
  }

  for(int i = 0; i < 26; i++) {
    cout << a[i] << " ";
  }
}
