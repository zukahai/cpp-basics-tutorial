#include <bits/stdc++.h>
using namespace std;

int maxTwoNumber(int a, int b)
{
    if (a > b) return a;
    return b;
}

int main()
{
    int a, b, c, d; cin >> a >> b >> c >> d;
    int max1 = maxTwoNumber(a, b);
    int max2 = maxTwoNumber(c, d);
    int max3 = maxTwoNumber(max1, max2);
    cout << max1 << endl;
    cout << max2 << endl;
    cout << max3;
    
    return 0;
}