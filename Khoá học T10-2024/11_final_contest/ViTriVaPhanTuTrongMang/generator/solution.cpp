#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    // Bài giải của bạn ở dưới đây

    int n;
    cin >> n;
    vector <int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int dChan = 0, dLe = 0;
    for (int i = 1; i < n; i += 2)
    {
        if (a[i] % 2 == 0) 
            dChan++;
    }

    for (int i = 0; i < n; i += 2)
    {
        if (a[i] % 2 == 1) 
            dLe++;
    }

    cout << dChan << " " << dLe;
}
