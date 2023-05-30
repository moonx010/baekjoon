#include <iostream>
using namespace std;

int main()
{
  double n;
  cin >> n;
  while (n >= 0)
  {
    cout << fixed;
    cout.precision(2);
    cout << "Objects weighing " << n << " on Earth will weigh " << n * 0.167 << " on the moon.\n";
    cin >> n;
  }
}