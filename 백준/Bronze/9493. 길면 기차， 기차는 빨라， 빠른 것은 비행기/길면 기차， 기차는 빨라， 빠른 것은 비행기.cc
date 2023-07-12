#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  double n, a, b;
  cin >> n >> a >> b;
  while (!(n == 0 && a == 0 && b == 0))
  {
    double t = (n / a - n / b);
    cout << (int)floor(t) << ":";
    int x = (int)round(t * 3600) % 3600;
    int m = x / 60;
    int s = x % 60;
    cout << (m < 10 ? "0" : "") << m << ":";
    cout << (s < 10 ? "0" : "") << s;
    cout << "\n";
    cin >> n >> a >> b;
  }
}