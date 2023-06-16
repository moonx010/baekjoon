#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  bool chk = false;
  for (int i = 1; i <= 5; i++)
  {
    string s;
    cin >> s;
    if (s.find("FBI") != string::npos)
    {
      cout << i << "\n";
      chk = true;
    }
  }
  if (!chk)
    cout << "HE GOT AWAY!";
}
