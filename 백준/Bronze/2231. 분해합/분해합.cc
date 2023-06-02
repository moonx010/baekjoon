#include <iostream>
using namespace std;

int cal(int x)
{
  int sum = x;
  int c = x;
  while (c > 0)
  {
    sum += c % 10;
    c = c / 10;
  }

  return sum;
}

int main()
{
  int n;
  cin >> n;
  for (int i = 1; i < n; i++)
  {
    if (cal(i) == n)
    {
      cout << i;
      return 0;
    }
  }
  cout << 0;
}
