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
    int m, score_a = 0, score_b = 0;
    cin >> m;
    for (int j = 0; j < m; j++)
    {
      char a, b;
      cin >> a >> b;
      if (a == 'R')
      {
        if (b == 'S')
          score_a++;
        if (b == 'P')
          score_b++;
      }
      if (a == 'S')
      {
        if (b == 'P')
          score_a++;
        if (b == 'R')
          score_b++;
      }
      if (a == 'P')
      {
        if (b == 'R')
          score_a++;
        if (b == 'S')
          score_b++;
      }
    }
    if (score_a > score_b)
      cout << "Player 1";
    else if (score_a < score_b)
      cout << "Player 2";
    else
      cout << "TIE";
    cout << "\n";
  }
}
