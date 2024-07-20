#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    string s = "";
    for (int i = 1; i <= n; i++) {
        s = s + "*";
        cout << s << endl;
    }
}
