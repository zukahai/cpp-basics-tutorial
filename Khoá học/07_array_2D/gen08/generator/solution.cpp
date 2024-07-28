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

    int max = 0;
    for (int j = 0; j < n; j++) {
        max += a[0][j];
    }
    int maxRow = 0;

    for (int i = 1; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += a[i][j];
        }
        if (sum > max) {
            max = sum;
            maxRow = i;
        }
    }

    for (int j = 0; j < n; j++) {
        cout << a[maxRow][j] << " ";
    }

}
