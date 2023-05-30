#include <iostream>
#include <string>
using namespace std;

int N;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	if (N == 0 || N == 2 || N == 3 || N == 5 || N == 6 || N == 7 || N == 8 || N == 9) {
		cout << " * * *";
	}
	cout << '\n';
	for (int i = 0; i < 3; i++) {
		if (N == 0 || N == 4 || N == 8 || N == 9) cout << "*     *";
		else if (N == 5 || N == 6) cout << "*";
		else cout << "      *";
		cout << '\n';
	}
	if (N == 2 || N == 3 || N == 4 || N == 5 || N == 6 || N == 8 || N == 9) cout << " * * *";
	cout << '\n';
	for (int i = 0; i < 3; i++) {
		if (N == 0 || N == 6 || N == 8) cout << "*     *";
		else if (N == 1 || N == 3 || N == 4 || N == 5 || N == 7 || N == 9) cout << "      *";
		else cout << "*";
		cout << '\n';
	}
	if (N == 0 || N == 2 || N == 3 || N == 5 || N == 6 || N == 8 || N == 9) cout << " * * *";
	cout << '\n';
}