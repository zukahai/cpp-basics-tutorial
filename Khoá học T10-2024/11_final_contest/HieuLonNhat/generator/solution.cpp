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

    int maxa = a[0];
    int mina = a[0];

    for (int i = 1; i < n; i++)
    {
        maxa = max(maxa, a[i]);
        mina = min(mina, a[i]);
    }

    cout << maxa - mina;

}
