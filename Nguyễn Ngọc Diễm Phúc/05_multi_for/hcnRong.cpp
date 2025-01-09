#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    cin >> a;
    for (int  i = 1; i <= a; i++) {
        if (i == 1 || i == a) {
            for (int j = 1; j <= a; j++) {
                cout << "*";
            }
            cout << endl;
        } else {
            cout << "*";
            for (int  j = 1; j <= a - 2; j++) {
                cout << " ";
            }
            cout << "*" << endl;
        }
    }
    
}