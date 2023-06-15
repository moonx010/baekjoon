#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    double value;
    string unit;
    cin >> value >> unit;

    cout << fixed;
    cout.precision(4);

    if (unit == "kg")
    {
      double pound = value * 2.2046;
      cout << pound << " lb"
           << "\n";
    }
    else if (unit == "lb")
    {
      double kilogram = value * 0.4536;
      cout << kilogram << " kg"
           << "\n";
    }
    else if (unit == "l")
    {
      double gallon = value * 0.2642;
      cout << gallon << " g"
           << "\n";
    }
    else if (unit == "g")
    {
      double liter = value * 3.7854;
      cout << liter << " l"
           << "\n";
    }
  }

  return 0;
}
