#include <iostream>

using namespace std;

int main() {
    int n;
    int a[1000];
    int tong = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        tong += a[i];
    cout << tong;
        
}
// i: Chỉ số, ví trí
// a[i]: phần tử, giá trị tại chỉ số i
