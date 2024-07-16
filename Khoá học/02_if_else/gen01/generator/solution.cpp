#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    if (n == 10)
        cout << n << " bang 10";
    else
        cout << n << " khong bang 10";
}
