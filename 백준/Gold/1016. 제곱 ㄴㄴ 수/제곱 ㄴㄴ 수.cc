#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  long long int a, b, ans = 0;
  vector<long long int> primes;
  cin >> a >> b;
  bool arr[b - a + 1];
  for (int i = 0; i < b - a + 1; i++)
  {
    arr[i] = false;
  }

  for (long long int j = 2; j * j <= b; j++)
  {
    bool hit = false;
    for (long long int i = 2; i * i <= j; i++)
    {
      if (j % i == 0)
      {
        hit = true;
        break;
      }
    }
    if (!hit)
      primes.push_back(j);
  }
  vector<long long int>::iterator iter;
  for (iter = primes.begin(); iter != primes.end(); iter++)
  {
    long long int j = *iter * *iter;
    for (long long int i = a % j == 0 ? 0 : j - (a % j); i < b - a + 1; i += j)
    {
      if (arr[i])
        continue;
      arr[i] = true;
    }
  }

  for (int i = 0; i < b - a + 1; i++)
  {
    if (!arr[i])
      ans++;
  }
  cout << ans;
}
