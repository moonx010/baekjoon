#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n = 0;
  string s = "WelcomeToSMUPC";
  cin >> n;
  cout << s[(n - 1) % s.length()];
}