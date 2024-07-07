v#include <iostream>

using namespace std;

int main() {
    int a,b;
    int n = 2;
    cin >> a >> b;
    if ((a % n == 0 && b % n == 0) || (a % n != 0 && b % n != 0))
    {
        cout << a << " "<< b << " cung tinh chat chan le";
    }
    else {
        cout << a << " "<< b << " khong cung tinh chat chan le";
    }
    
}

