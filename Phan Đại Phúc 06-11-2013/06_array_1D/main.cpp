#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i <= n - 1; i++) {
        cin >> a[i];
    }

    cout << a[0] << endl;
    cout << a[n - 1] << endl;
}