#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  while (a <= b)
  {
    cout << "All positions change in year " << a << "\n";
    a += 60;
  }
}