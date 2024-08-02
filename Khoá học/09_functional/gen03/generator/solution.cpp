#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    /*
    - ước chung lớn nhất của `a` và `b`
- ước chung lớn nhất của `a` và `c`
- ước chung lớn nhất của `b` và `c`
- ước chung lớn nhất của `a + b` và `a + c`*/
    int a, b, c;
    cin >> a >> b >> c;
    cout << gcd(a, b) << endl;
    cout << gcd(a, c) << endl;
    cout << gcd(b, c) << endl;
    cout << gcd(a + b, a + c) << endl;
}
