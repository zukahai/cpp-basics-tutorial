#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    // 1 * 2 + 2 * 3 + 3 * 4 + 4 * 5 + 5 * 6 = 70

    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i * (i + 1);
        cout << i << " * " << i + 1;
        if (i < n)
            cout << " + ";

    }

    cout << " = " << sum;

    
}
