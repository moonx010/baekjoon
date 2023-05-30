#include <iostream>
using namespace std;

int main()
{
  int m = 0;
  for (int i = 0; i < 2; i++)
  {
    int sum = 0;
    for (int j = 0; j < 4; j++)
    {
      int x;
      cin >> x;
      sum += x;
    }
    m = max(sum, m);
  }
  cout << m;
}