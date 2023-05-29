#include <iostream>
using namespace std;

int main()
{
  string x;
  while (1)
  {
    getline(cin, x);
    if (cin.eof())
      break;
    cout << x << "\n";
  }
}