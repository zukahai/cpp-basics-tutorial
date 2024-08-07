#include<bits/stdc++.h>
using namespace std;

int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    /*
    - Số lớn nhất trong `a` và `b`
- Số lớn nhất trong `b` và `c`
- Số lớn nhất trong `a`, `b`, `c` và `d`
    */
   int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max(a, b) << endl;
    cout << max(c, d) << endl;
    cout << max(max(a, b), max(c, d)) << endl;
}
