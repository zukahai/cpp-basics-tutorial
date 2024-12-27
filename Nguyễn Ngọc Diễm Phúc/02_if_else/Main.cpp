#include <iostream>

using namespace std;

int main() {
    // int: -2^31 den 2^31 - 1, int 4 byte, -2 * 10^9 den 2 * 10^9
    // long long: -2^63 den 2^63 - 1, int 8 byte, -9 * 10^18 den 9 * 10^18
	int a = 1000000; // -2^31 den 2^31 - 1, int 4 byte
    cout << a * a << endl;
    long long b = a * a;
    cout << b;
}
