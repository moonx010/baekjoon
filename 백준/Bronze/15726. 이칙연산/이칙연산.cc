#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  long long int a, b, c;
  cin >> a >> b >> c;
  cout << (long long int)(max((double)(a * b) / c, ((double)a / b) * c));
}
