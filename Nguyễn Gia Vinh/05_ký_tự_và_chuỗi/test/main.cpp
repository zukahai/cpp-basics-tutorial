#include <bits/stdc++.h>

using namespace std;

int main() {
    char ch;
    cin >> ch; //b
    // Kiem tra ch co phai la chua cai in thuong hay khong 'a' -> 'z'
    if (ch >= 'a' && ch <= 'z') {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
