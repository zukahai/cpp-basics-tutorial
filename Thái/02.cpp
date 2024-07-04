// Câu lệnh điều kiện

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a > b) {
        cout << a << " lớn hơn " << b;
    } else if (a < b) {
        cout << a << " nhỏ hơn " << b;
    } else {
        cout << a << " bằng " << b;
    }
}