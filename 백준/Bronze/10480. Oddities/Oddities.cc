#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    cout << x << " is ";
    if (x % 2 == 0)
      cout << "even";
    else
      cout << "odd";
    cout << "\n";
  }
}