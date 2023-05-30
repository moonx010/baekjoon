#include <iostream>
using namespace std;

int main()
{
  int a[4];
  int t = 2;
  cin >> a[0];
  for (int i = 1; i < 4; i++)
  {
    cin >> a[i];
    int x;
    if (a[i] > a[i - 1])
      x = 1;
    else if (a[i] < a[i - 1])
      x = -1;
    else
      x = 0;

    if (t == x)
      continue;
    else
    {
      if (t == 2)
        t = x;
      else if (t == 3)
        continue;
      else
      {
        t = 3;
      }
    }
  }
  if (t == -1)
    cout << "Fish Diving";
  else if (t == 0)
    cout << "Fish At Constant Depth";
  else if (t == 1)
    cout << "Fish Rising";
  else
    cout << "No Fish";
}