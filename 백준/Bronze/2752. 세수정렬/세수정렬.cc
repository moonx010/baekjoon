#include <iostream>
using namespace std;

int main()
{
  int a[3];
  for (int i = 0; i < 3; i++)
  {
    cin >> a[i];
  }
  int min = 0, max = 0;
  for (int i = 0; i < 3; i++)
  {
    if (a[min] > a[i])
      min = i;
    if (a[max] < a[i])
      max = i;
  }

  int mid = 0;
  for (int i = 0; i < 3; i++)
  {
    if (i != min && i != max)
      mid = i;
  }

  cout << a[min] << " " << a[mid] << " " << a[max];
}