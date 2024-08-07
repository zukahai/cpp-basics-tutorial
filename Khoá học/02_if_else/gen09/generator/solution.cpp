#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    if (n >= 10 && n <= 99 && (n % 10 - n / 10 == 1 || n % 10 - n / 10 == -1)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
