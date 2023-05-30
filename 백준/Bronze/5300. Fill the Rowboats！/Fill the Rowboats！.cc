#include <iostream>
using namespace std;

int main()
{
  double n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cout << i << " ";
    if (i < n && i % 6 == 0)
    {
      cout << "Go! ";
    }
  }
  cout << "Go!";
}