#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    for (int i = 1; i <= n / 3; i++)
        if (i * 3 % 5 != 0){
            cout << i * 3 << " ";
        }
}
