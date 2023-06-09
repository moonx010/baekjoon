#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t1, m1, t2, m2;
  cin >> t1 >> m1 >> t2 >> m2;
  int time = t2 * 60 + m2 - (t1 * 60 + m1);
  if (time < 0)
    time += 24 * 60;
  cout << time << "\n"
       << time / 30;
}
