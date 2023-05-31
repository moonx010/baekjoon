#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x, y;
    cin >> x >> y;
    for (int p = 0; p < y; p++)
    {
      for (int q = 0; q < x; q++)
      {
        cout << "X";
      }
      cout << "\n";
    }
    cout << "\n";
  }
}