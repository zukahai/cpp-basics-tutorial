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

    int max = a[0][0];

    for (int i = 0; i < m; i++) {
        max = a[i][0];
        for (int j = 0; j < n; j++) {
            if (a[i][j] > max)
                max = a[i][j];
        }
        int min = a[i][0];
        for (int j = 0; j < n; j++) {
            if (a[i][j] < min)
                min = a[i][j];
        }

        cout << min << " " << max << endl;
    }

}
