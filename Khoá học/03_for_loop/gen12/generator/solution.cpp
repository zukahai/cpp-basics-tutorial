#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");


    long long n;
    cin >> n;
    cout << "Tong chu vi: " << 2 * n * (n + 1) << endl;
    cout << "Tong dien tich: " << n * (n + 1) * (2 * n + 1) / 6 << endl;


    
}
