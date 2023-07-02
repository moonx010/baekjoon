#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  string s;
  cin >> s;
  for(int i = 0; i < s.size(); i++) {
    if(i != 0 && i % 3 == s.size() % 3) cout << ",";
    cout << s[i]; 
  }
}