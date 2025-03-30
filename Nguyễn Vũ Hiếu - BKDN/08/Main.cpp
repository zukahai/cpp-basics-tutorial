#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0, r = n - 1, mid;
    int res;
    while (l <= r) {
        mid = (l + r) / 2;
        if (a[mid] == x) {
            res = mid;
            r = mid - 1;
        }
        else if (a[mid] > x) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << res;
   
}