#include <iostream>
using namespace std;

int main()
{
  int a, b, arr[5];
  cin >> a >> b;

  for (int i = 0; i < 5; i++)
  {
    int x;
    cin >> x;
    arr[i] = x - a * b;
  }

  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }
}