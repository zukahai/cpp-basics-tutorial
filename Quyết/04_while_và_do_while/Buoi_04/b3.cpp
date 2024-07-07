/*
 Nhập vào 3 số nguyên dương a,b,c.
 In ra kết qủa là tổng các số chia hết cho c trong [a, b]
 
 Ví dụ:
 a = 1, b = 10, c = 2
 2 + 4 + 6 + 8 + 10 = 30
 
 a = 1, b = 10, c = 3
 3 + 6 + 9 = 18
 
 */

#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    int tong = 0;
    cin >> a >> b >> c;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            cout << i;
            tong += i;
            if (i + c <= b)
            {
                cout << " + ";
            }
        }
        
    }
    cout << " = ";
    cout << tong;
    
}
