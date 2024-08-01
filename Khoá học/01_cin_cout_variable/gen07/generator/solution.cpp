#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    // Chu so cuoi cung cua 456 la 6 

    int a;
    cin >> a;
    cout << "Chu so cuoi cung cua " << a << " la " << a % 10;
}
