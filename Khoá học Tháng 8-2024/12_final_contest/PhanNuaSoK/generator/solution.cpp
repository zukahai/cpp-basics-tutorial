#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n, k;
    cin >> n >> k;
    vector <int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] * 2 < k)
        {
            count++;
        }
    }

    cout << count;

    
}
