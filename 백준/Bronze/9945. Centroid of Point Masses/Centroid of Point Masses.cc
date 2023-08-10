#include <iostream>

using namespace std;

int main() {
    int i = 1;
    cout << fixed;
    cout.precision(2);
    
    while (true) {
        int n;
        cin >> n;
        if (n < 0) {
            break;
        }

        double X = 0, Y = 0, M = 0;
        for (int j = 0; j < n; ++j) {
            int x, y, m;
            cin >> x >> y >> m;
            X += x * m;
            Y += y * m;
            M += m;
        }
        cout << "Case " << i << ": " << (X / M) << " " << (Y / M) << endl;

        i += 1;
    }

    return 0;
}
