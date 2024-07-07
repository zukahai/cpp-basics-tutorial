#include <iostream>

using namespace std;

int main() {
    int n;
    int k = 1;
    int tong = 0;
    cin >> n;
    do {
        tong += k;
        k++;
    } while(tong <= n);
    cout << "K = " << k - 2;
    
}


/*
 tong: 0 1 3 6
 k:    1 2 3 4
 
 
 Nhập vào số nguyên dương N
 Tìm số K lớn nhất sao cho
 
 S = 1 + 2 + 3 + ... + K <= N
 
 Ví dụ:
 N = 8
 Thì K = 3
 Vì 1 + 2 + 3 <= 8
 
 Ví dụ
 N = 5
 Thì K = 2
 Vì 1 + 2 <= 5
 
 
 */
