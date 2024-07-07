#include <iostream>

using namespace std;

int main() {
    int n;
    int dem = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        if (i % 2 == 0)
        {
            dem += 1;
        }
    cout << dem;
}
