#include <iostream>

using namespace std;

int main() {
    int n;
    int a[1000];
    int tong = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            tong += a[i];
        }
    }
    cout << tong;
}
