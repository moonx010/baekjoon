#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  int diff = b - a;
  if (diff <= 0)
    cout << "Congratulations, you are within the speed limit!";
  else if (diff > 0 && diff < 21)
    cout << "You are speeding and your fine is $100.";
  else if (diff > 20 && diff < 31)
    cout << "You are speeding and your fine is $270.";
  else
    cout << "You are speeding and your fine is $500.";
}