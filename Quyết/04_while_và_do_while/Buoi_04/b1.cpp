#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    int tong = 0;
    cin >> a >> b >> c;
    for ( int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            tong += i;
        }
    }
    cout << tong;
}
