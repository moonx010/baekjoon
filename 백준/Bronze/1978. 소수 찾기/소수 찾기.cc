#include <iostream>
using namespace std;

bool checkPrime(int x)
{
  if (x == 1)
    return false;
  for (int i = 2; i < x; i++)
  {
    if (x % i == 0)
      return false;
  }

  return true;
}

int main()
{
  int n;
  int count = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    if (checkPrime(x))
      count++;
  }

  cout << count;
}
