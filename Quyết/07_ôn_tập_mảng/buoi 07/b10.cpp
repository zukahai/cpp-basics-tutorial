
#include <iostream>

using namespace std;

int main() {
    int n;
    int a[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int max = -1000000;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    int max2 = -1000000;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < max)
            if (max2 < a[i])
                max2 = a[i];
    }
     if (max2 == -1000000)
     {
         cout << "-1";
     }
    else
    {
        cout << max2;
    }
    
}


