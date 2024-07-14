#include <iostream>

using namespace std;

long long tongABC(int n) {
    long long tongg1 = 1;
    for (int i = 1; i <= n; i++)
        tongg1 *=i;
        return tongg1;
}

int main() {
    cout << tongABC(20);
}
// 0 < a, b <= 10^6
