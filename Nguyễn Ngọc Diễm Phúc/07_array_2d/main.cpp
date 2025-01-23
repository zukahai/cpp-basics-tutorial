#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[101];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    int max2 = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i] != max) {
            if (a[i] > max2) {
                max2 = a[i];
            }
        }
    }

    int max3 = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i] != max && a[i] != max2) {
            if (a[i] > max3) {
                max3 = a[i];
            }
        }
    }

    if (max3 == INT_MIN) {
        cout << "No third largest element";
    } else {
        cout << max3;
    }

}