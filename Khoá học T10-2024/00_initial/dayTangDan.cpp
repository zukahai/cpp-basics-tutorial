#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int ss = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] >= a[i + 1]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}