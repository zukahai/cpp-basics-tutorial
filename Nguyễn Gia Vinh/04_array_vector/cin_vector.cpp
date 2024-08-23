#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> a;
    int n;
    cin >> n;
    // for (int i = 0; i < n; i++) {
    //     int x;
    //     cin >> x;
    //     a.push_back(x);
    // }

    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (auto x: a) {
        cout << x << " ";
    }
    
}