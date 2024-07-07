#include <iostream>

using namespace std;

int main() {
    int n;
    int a[1000];
    int dem = 0;
    int dem2 = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0)
        {
            dem += 1;
        }
    for (int i = 0; i < n; i++)
        if (a[i] % 2 != 0)
        {
            dem2 += 1;
        }
    cout << dem2 * (dem2 - 1)/2 + dem * (dem - 1)/2;
    
}



