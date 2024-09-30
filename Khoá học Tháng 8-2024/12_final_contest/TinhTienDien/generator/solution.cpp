#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    /*
    - 50 số đầu tiên: 100 đồng/số
    - 50 số tiếp theo: 150 đồng/số
    - Các số tiếp theo: 200 đồng/số
        
    */

    int n;
    cin >> n;

    if (n <= 50) {
        cout << n * 100;
    } else if (n <= 100) {
        cout << 50 * 100 + (n - 50) * 150;
    } else {
        cout << 50 * 100 + 50 * 150 + (n - 100) * 200;
    }

    
}
