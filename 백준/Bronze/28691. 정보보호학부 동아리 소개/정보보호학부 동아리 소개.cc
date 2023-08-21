#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  char c;
  cin >> c;
  switch (c)
  {
  case 'M':
    cout << "MatKor";
    break;

  case 'W':
    cout << "WiCys";
    break;
  case 'C':
    cout << "CyKor";
    break;
  case 'A':
    cout << "AlKor";
    break;
  case '$':
    cout << "$clear";
    break;
  default:
    break;
  }
}