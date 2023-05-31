#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    string x, y;
    cin >> x >> y;
    if (x.size() != y.size())
      cout << "ERROR";
    else
    {
      bool check = true;
      for (int j = 0; j < x.size(); j++)
      {
        if (x[j] != y[j])
          check = false;
      }
      if (check)
        cout << "OK";
      else
        cout << "ERROR";
    }
    cout << "\n";
  }
}