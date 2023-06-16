#include <iostream>
#include <cmath>
#include <string>

using namespace std;

const int MAX_SIZE = 6561;

char a[MAX_SIZE][MAX_SIZE];

void f(int n, int x, int y)
{
  if (n == 1)
  {
    a[x][y] = '*';
    return;
  }
  f(n / 3, x, y);
  f(n / 3, x + n / 3, y);
  f(n / 3, x + (n / 3) * 2, y);
  f(n / 3, x, y + n / 3);
  f(n / 3, x + (n / 3) * 2, y + n / 3);
  f(n / 3, x, y + (n / 3) * 2);
  f(n / 3, x + n / 3, y + (n / 3) * 2);
  f(n / 3, x + (n / 3) * 2, y + (n / 3) * 2);
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      a[i][j] = ' ';
    }
  }
  f(n, 0, 0);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << a[i][j];
    }
    cout << "\n";
  }
}
