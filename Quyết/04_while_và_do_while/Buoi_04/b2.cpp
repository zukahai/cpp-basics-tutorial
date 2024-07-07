#include <iostream>

using namespace std;

int main() {
    int n;
    int tong = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            tong += i;
            cout << " + ";
        }
        else
        {
            tong -= i;
            cout << " - ";
        }
        cout << i;
        
    }
    cout << " = ";
    cout << tong;
    
}
