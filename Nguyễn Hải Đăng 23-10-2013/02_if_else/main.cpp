#include <bits/stdc++.h>

using namespace std;

int main() {
    int a = 10;
    int b = 20;
    if (a > 50 && b < 100) {
        cout << "X";
        cout << a;
    }
    else if (a < 10 || b > 20)
        cout << "Y";
    else
        cout << "Z";
}