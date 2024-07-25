#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int count10 = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 10)
            count10++;
    }
    cout << count10;
}
