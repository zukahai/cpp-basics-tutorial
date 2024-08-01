#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    /*
    So thu 1 cua 1234 la 1
    So thu 2 cua 1234 la 2
    So thu 3 cua 1234 la 3
    So thu 4 cua 1234 la 4
    
    */
    int n;
    cin >> n;
    cout << "So thu 1 cua " << n << " la " << n / 1000 << endl;
    cout << "So thu 2 cua " << n << " la " << n / 100 % 10 << endl;
    cout << "So thu 3 cua " << n << " la " << n / 10 % 10 << endl;
    cout << "So thu 4 cua " << n << " la " << n % 10 << endl;
}
