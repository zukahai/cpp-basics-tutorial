#include <bits/stdc++.h>

using namespace std;
int a[10000000];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
	    cin >> a[i];

    sort(a, a + n); // quick sort
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}