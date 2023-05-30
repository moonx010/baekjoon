#include <iostream>
using namespace std;

int main()
{
  int n, a, b, c, d;
  cin >> n >> a >> b >> c >> d;
  cout << n - max((a / c) + !!(a % c), ((b / d) + !!(b % d)));
}