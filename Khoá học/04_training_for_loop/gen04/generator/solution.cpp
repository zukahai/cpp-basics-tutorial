#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cout << i << " " << i * i << " " << i * i * i << endl;
}
