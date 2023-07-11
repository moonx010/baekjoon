#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  cin >> s;
  if (s.compare("SONGDO") == 0)
    cout << "HIGHSCHOOL";
  if (s.compare("CODE") == 0)
    cout << "MASTER";
  if (s.compare("2023") == 0)
    cout << "0611";
  if (s.compare("ALGORITHM") == 0)
    cout << "CONTEST";
}