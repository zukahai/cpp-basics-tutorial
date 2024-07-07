#include <iostream>

using namespace std;

int main() {
    int n;
    int tong = 0;
    cin >> n;
    for (int i = 2; i <= n; i += 2)
    {
        cout << i;
        tong = tong + i;
        if (i < n && n % 2 == 0)
        {
            cout << " + ";
        }
        if (i < n - 1 && n % 2 != 0)
        {
            cout << " + ";
        }
    }
    cout << " = ";
    cout << tong;
    
}
    
/**
 Nhập vào số nguyên dương N, in ra tổng các số tự nhiên chẵn trong khoảng 1 đến N
 Ví dụ N = 10
 thì in ra 2 + 4 + 6+  8 + 10 = 30
 */

