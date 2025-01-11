#include <bits/stdc++.h>

using namespace std;

int main() {
    // 1 + 2 + 3 + ... + x <= n

    int n;
    cin >> n;
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;
        if (s > n) {
            cout << i - 1 << " ";
            break;
        }
    }
}