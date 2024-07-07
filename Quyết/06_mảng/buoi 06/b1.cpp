/**
 
 Số hoàn thiện là số mà tổng các ước nhỏ hơn N đúng bằng N
 Ví dụ 6 là số hoàn thiện vì các ước nhỏ hơn 6 là 1, 2, 3 có tổng bằng 6
 Ví dụ 10 không là số hoàn thiện vì các ước nhỏ hơn 10 là 1, 2, 5, tổng không bằng 10
 Nếu N là số hoàn thiện in ra YES, còn không thì in ra NO
 1 2 4 7 14
 */

#include <iostream>

using namespace std;

int main() {
    int n;
    int tong = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
        {
            tong += i;
        }
    tong -= n;
    if (tong == n)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
}
