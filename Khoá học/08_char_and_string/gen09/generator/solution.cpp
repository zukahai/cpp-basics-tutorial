#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    string x, y;
    cin >> x >> y;
    string p = "";
    while (p.size() < y.size())
    {
        p += x;
    }
    if (p == y)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
}
