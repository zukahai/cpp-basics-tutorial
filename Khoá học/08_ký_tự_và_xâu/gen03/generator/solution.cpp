#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    char c;
    cin >> c;
    cout << char(c - 1) << endl << char(c + 1);
}
