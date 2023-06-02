#include <iostream>
using namespace std;

bool checkPrime(int x)
{
  if (x == 1)
    return false;
  for (int i = 2; i * i <= x; i++)
  {
    if (x % i == 0)
      return false;
  }

  return true;
}

int main()
{
  int n, m;
  cin >> n >> m;
  for (int i = n; i <= m; i++)
  {
    if (checkPrime(i))
      cout << i << "\n";
  }
}
