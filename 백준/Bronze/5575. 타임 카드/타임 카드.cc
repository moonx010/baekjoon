#include <iostream>
using namespace std;

int main()
{
  for (int k = 0; k < 3; k++)
  {
    int sum1 = 0;
    for (int i = 0; i < 3; i++)
    {
      int n;
      cin >> n;
      sum1 = sum1 * 60 + n;
    }
    int sum2 = 0;
    for (int i = 0; i < 3; i++)
    {
      int n;
      cin >> n;
      sum2 = sum2 * 60 + n;
    }
    int sum = sum2 - sum1;
    int h = sum / 3600;
    int m = (sum % 3600) / 60;
    int s = sum % 60;
    cout << h << " " << m << " " << s << "\n";
  }
}