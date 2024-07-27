#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int a, b;
    cin >> a >> b;
    if (a % b == 0) {
        cout << a << " chia het cho " << b;
    } else {
        cout << a << " khong chia het cho " << b;
    }
}
