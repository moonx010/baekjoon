#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  string s[9] = {" @@@   @@@  ",
                  "@   @ @   @ ",
                  "@    @    @ ",
                  "@         @ ",
                  " @       @  ",
                  "  @     @   ",
                  "   @   @    ",
                  "    @ @     ",
                  "     @      "};
  int n;
  cin >> n;
  for(int i = 0; i < 9; i++) {
    for(int j = 0; j < n; j++) {
      cout << s[i];
    }
    cout << "\n";
  }

}