#include<bits/stdc++.h>
using namespace std;

int countDivisors(int n)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            cnt++;
    return cnt;
}

string isPrime(int n)
{
    if (countDivisors(n) == 2)
        return "YES";
    return "NO";
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    int a, b, c;
    cin >> a >> b >> c;
    cout << isPrime(a) << endl;
    cout << isPrime(b) << endl;
    cout << isPrime(c) << endl;
}
