#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

// So dao nguoc cua 12 la 21
    int n;
    cin >> n;
    cout << "So dao nguoc cua " << n << " la ";
    cout << n % 10 << n / 10;
}
