#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = n; i >= 0; i--)
        if (i % 2 == 0) {
            cout << i << endl;
            break;
        }
    
}


/*
 
Nhập vào số nguyên dương N.
 In ra số chẵn lớn nhất bé hơn hoặc bằng N
 
Ví dụ N = 15. Kết quả là 14
Ví dụ N = 10. Kết qủa 10
 
 */
