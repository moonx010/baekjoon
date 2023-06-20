#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, c;
  cin >> n >> c;
  int x = 0, y = 0, p = 0;
  double z;
  for (int i = 0; i < n; i++)
  {
    string s;
    int k;
    cin >> k >> s;
    if (s.compare("bedroom") == 0)
    {
      y += k;
    }
    if (s.compare("balcony") == 0)
    {
      p += k;
    }
    x += k;
  }
  cout << fixed;
  cout.precision(6);
  cout
      << x << "\n"
      << y << "\n"
      << (double)x * c - ((double)(p * c) / 2);
}
