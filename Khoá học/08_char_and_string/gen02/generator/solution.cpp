#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    char c;
    cin >> c;
    if (c >= 'A' && c <= 'Z') {
        cout << 1;
    } else if (c >= 'a' && c <= 'z') {
        cout << 2;
    } else if (c >= '0' && c <= '9') {
        cout << 3;
    } else {
        cout << 4;
    }
}
