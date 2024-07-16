#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int a, b;
    cin >> a >> b;
    if (a > b) 
        cout << a;
    else
        cout << b;
}
