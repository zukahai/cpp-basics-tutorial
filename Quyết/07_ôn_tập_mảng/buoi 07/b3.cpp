#include <iostream>

using namespace std;

int main() {
    int n;
    int a[1000];
    int dem = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    cout << max << " ";
    for (int i = 0; i < n; i++)
        if (a[i] == max)
        {
            dem += 1;
        }
    cout << dem;
}
