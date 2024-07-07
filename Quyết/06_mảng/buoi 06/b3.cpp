#include <iostream>

using namespace std;

int main() {
    int n;
    int a[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << a[0] << " " << a[n - 1];
    
}
// 0 1 2 3 ... n - 1
