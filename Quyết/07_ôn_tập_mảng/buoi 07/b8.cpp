#include <iostream>

using namespace std;

int main() {
    int n;
    int a[1000];
    int dem = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
        if (a[i] == a[i + 1])
        {
            dem += 1;
        }
    cout << dem;
}


