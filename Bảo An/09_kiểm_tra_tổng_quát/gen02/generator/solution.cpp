#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int a, b;
    cin >> a >> b;
    cout << "Dien tich: " << a * b << ", Chu vi: " << 2 * (a + b);
}
