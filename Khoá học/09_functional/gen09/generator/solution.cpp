#include<bits/stdc++.h>
using namespace std;

int countDivisors(int n)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            cnt++;
    return cnt;
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int res = 0;
    for (int i = 0; i < n; i++)
        if (countDivisors(a[i]) == 2)
            res++;

    cout << res;
    
}
