#include <iostream>

using namespace std;

int a[1000000];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << a[n - 1];
}