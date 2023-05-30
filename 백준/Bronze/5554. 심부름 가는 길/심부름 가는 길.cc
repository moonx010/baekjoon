#include <iostream>
using namespace std;

int main()
{
  int sum = 0;
  for (int i = 0; i < 4; i++)
  {
    int n;
    cin >> n;
    sum += n;
  }
  int m = sum / 60;
  int s = sum % 60;
  cout << m << "\n"
       << s;
}