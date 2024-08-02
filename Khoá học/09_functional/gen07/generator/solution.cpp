#include<bits/stdc++.h>
using namespace std;

long long sum(int n)
{
    return (long long) n * (n + 1) / 2;
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int a, b;
    cin >> a >> b;
    cout << sum(a) << endl;
    cout << sum(b) << endl;
    cout << sum(b) - sum(a - 1);
    
}
