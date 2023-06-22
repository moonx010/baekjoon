#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s[3] = {"Wide Receiver", "Lineman", "Quarterback"};
  double speed[3] = {4.5, 6, 5};
  int weight[3] = {150, 300, 200}, strength[3] = {200, 500, 300};
  double a;
  int b, c;
  cin >> a >> b >> c;
  while (!(a == 0 && b == 0 && c == 0))
  {
    bool hit = false;
    for (int i = 0; i < 3; i++)
    {
      if (a <= speed[i] && b >= weight[i] && c >= strength[i])
      {
        cout << s[i] << " ";
        hit = true;
      }
    }
    if (!hit)
      cout << "No positions";
    cout << "\n";
    cin >> a >> b >> c;
  }
}
