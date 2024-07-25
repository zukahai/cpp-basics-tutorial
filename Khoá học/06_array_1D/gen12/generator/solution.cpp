#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] != a[n - 1]) {
            cout << a[i];
            break;
        }
    }
}
