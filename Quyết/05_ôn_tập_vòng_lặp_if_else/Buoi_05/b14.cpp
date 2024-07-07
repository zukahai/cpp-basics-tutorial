#include <iostream>

using namespace std;

int main() {
    int n;
    int dem = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
        {
            dem += 1;
        }
    cout << dem;
}

