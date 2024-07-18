#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    int sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        sum += i;
    cout << sum;
}
