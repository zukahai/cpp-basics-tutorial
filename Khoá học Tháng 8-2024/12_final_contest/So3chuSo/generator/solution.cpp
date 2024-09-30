#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    int x1 = n / 100;
    int x2 = (n / 10) % 10;
    int x3 = n % 10;
    cout << x1 << " " << x2 << " " << x3 << endl;
    cout << (((x1 + x2 + x3) % 2 == 0) ? "YES" : "NO");
}
