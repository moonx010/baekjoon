#include <iostream>
using namespace std;

int main()
{
  int n = 0;
  int s;
  cin >> s;
  while (n * n <= s)
  {
    n++;
  }
  cout << "The largest square has side length " << n - 1 << ".";
}