#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int x[6];
  for(int i = 0; i < 6; i++) {
    string s;
    getline(cin, s);
    if(s[s.size() - 1] == ' ') x[i] = s.size() - 1;
    else x[i] = s.size();
  }

  cout << "Latitude " << x[0] << ":" << x[1] << ":" << x[2] << "\n";
  cout << "Longitude " << x[3] << ":" << x[4] << ":" << x[5] << "\n";
}