#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    int gt = 1;
    cin >> n;
    for (int i = 1; i <= n; i ++) {
        gt *= i;
        cout << i;
        if (i < n) cout << " * ";
    }
    cout << " = " << gt;
}
