#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    if (n >= 100 && n <= 999)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
