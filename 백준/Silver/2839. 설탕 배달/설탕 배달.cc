#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int bagCount = -1;

    for (int i = N / 5; i >= 0; i--) {
        int remainder = N - (i * 5);
        if (remainder % 3 == 0) {
            bagCount = i + (remainder / 3);
            break;
        }
    }

    cout << bagCount << endl;
    return 0;
}