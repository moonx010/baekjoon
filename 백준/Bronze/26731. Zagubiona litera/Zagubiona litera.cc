#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  string s;
  cin >> s;
  int sum = 0;
  for(int i = 0; i < s.size(); i++) {
    sum += s[i] - 'A';
  }
  cout << (char) (325 - sum + 'A');
}