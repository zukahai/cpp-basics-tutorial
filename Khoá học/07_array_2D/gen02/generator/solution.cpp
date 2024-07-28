#include<bits/stdc++.h>
using namespace std;

int a[1001][1001];

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
           cin >> a[i][j];
        }
    }

    long long sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
           sum += a[i][j];
        }
    }

    cout << sum;
}
