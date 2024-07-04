#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    
    if (a > b) {
        int t = a;
        a = b;
        b = t;
    }
    if (a > c) {
        int t = a;
        a = c;
        c = t;
    }
    if (a > d) {
        int t = a;
        a = d;
        d = t;
    }
    if (a > e) {
        int t = a;
        a = e;
        e = t;
    }

    long long min = b;
    if (c < min)
        min = c;
    if (d < min)
        min = d;
    if (e < min)
        min = e;

    cout << min;

}