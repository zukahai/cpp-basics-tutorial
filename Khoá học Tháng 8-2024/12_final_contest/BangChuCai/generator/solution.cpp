#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    n = (n - 1) % 26 + 1;
    cout << (char)('A' + n - 1);
}
