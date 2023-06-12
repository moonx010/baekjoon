#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  string s;
  cin >> s;
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == 'a') cout << 4;
    else if(s[i] == 'e') cout << 3;
    else if(s[i] == 'i') cout << 1;
    else if(s[i] == 'o') cout << 0;
    else if(s[i] == 's') cout << 5;
    else cout << s[i];
  }
}