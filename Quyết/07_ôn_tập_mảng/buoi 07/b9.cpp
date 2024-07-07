#include <iostream>

using namespace std;

int main() {
    int n;
    int a[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int max = -100000000;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            if (max < a[i])
                max = a[i];
    }
        if (max == -100000000)
        {
            cout << "-1";
        }
    else
    {
        cout << max;
    }
        
}



