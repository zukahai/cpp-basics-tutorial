#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int array[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> array[i][j];
        }
    }

    for (int j = 0; j < n; j++) {
        cout << array[0][j] << ' ';
    }
    return 0;
}

