#include <iostream>
using namespace std;

int main()
{
  double a, b;
  cin >> a >> b;
  double bmi = a / (b * b);
  if (bmi > 25)
    cout << "Overweight";
  else if (bmi <= 25 && bmi >= 18.5)
    cout << "Normal weight";
  else
    cout << "Underweight";
}