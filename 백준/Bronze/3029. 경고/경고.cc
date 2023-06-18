#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int h1, m1, s1, h2, m2, s2;
  scanf("%d:%d:%d", &h1, &m1, &s1);
  scanf("%d:%d:%d", &h2, &m2, &s2);
  int time = h2 * 3600 + m2 * 60 + s2 - (h1 * 3600 + m1 * 60 + s1);
  time = time < 0 ? time + 24 * 3600 : time;

  int h = time / 3600;
  string x = h < 10 ? "0" : "";
  int m = (time % 3600) / 60;
  string y = m < 10 ? "0" : "";
  int s = time % 60;
  string z = s < 10 ? "0" : "";
  if (h == 0 && m == 0 && s == 0)
    cout << "24:00:00";
  else
    cout << x << h << ":" << y << m << ":" << z << s;
}
