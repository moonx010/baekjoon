#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  while (1)
	{
		int N;
		cin >> N;

		if (N == 0)
		{
			break;
		}

		int result = N * N - (N - 1);

		cout << N << " => " << result << "\n";
	}

	return 0;
}