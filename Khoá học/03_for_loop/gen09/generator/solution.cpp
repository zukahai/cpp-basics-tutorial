#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    int tong = 0;
    for (int i = 3; i <= n; i += 3)
        tong += i;
    cout << tong;
}
