#include <iostream>

using namespace std;

int tong(int n) {
    int tong = 0;
    for (int i = 1; i <= n; i++)
        tong += i;
    return tong;
}
    


int main() {
    int n;
    cin >> n;
    cout << tong(n);
    
}
