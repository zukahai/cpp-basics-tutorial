#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a, b;
    long long t = 1;
    cin >> a >> b;

    while(b > 0) {
        if (b % 2 == 0) {
            b = b / 2;
            a = a * a;
            a %= 10000;
        } else {
            t = t * a;
            b--;
            t %= 10000;
        }
    }
    cout << t;
}
/*
2^25 ->2 * 2^24 -> 2 * 4^12 -> 2 * 16^6 -> 2 * 256^3 -> 2 * 256 * 256^2 -> 2 * 256 * 




 */