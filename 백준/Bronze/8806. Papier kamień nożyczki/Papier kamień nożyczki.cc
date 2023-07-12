#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    double a[3], b[3], pa = 0, pb = 0;
    for (int j = 0; j < 3; j++)
    {
      cin >> a[j];
    }
    for (int j = 0; j < 3; j++)
    {
      cin >> b[j];
    }
    pa = a[0] * b[1] + a[1] * b[2] + a[2] * b[0];
    pb = b[0] * a[1] + b[1] * a[2] + b[2] * a[0];
    if (pa > pb)
      cout << "ADAM\n";
    else if (pa < pb)
      cout << "GOSIA\n";
    else
      cout << "=\n";
  }
}