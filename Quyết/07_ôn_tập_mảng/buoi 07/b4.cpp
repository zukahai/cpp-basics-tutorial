#include <iostream>

using namespace std;

int main() {
    int n;
    int a[1000];
    int dem = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
    }
    cout << min << " ";
    for (int i = 0; i < n; i++)
        if (a[i] == min)
        {
            dem += 1;
        }
    cout << dem;
}
