#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    vector <int> a(n);
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i += 2) {
        if (a[i] % 2 != 0) {
            count++;
            cout << a[i] << " ";
        }
    }

    if (count == 0) {
        cout << "NULL";
    }
}
