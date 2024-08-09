#include <bits/stdc++.h>

using namespace std;

int main() {
    double sum = 0, x;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        sum += x;
    }
    cout << sum / n;
}
