#include <bits/stdc++.h>

using namespace std;

int main()
{
    double t, n, k, m;
    // t: lai suat
    // n: von
    // k: so thang
    // m: so tien can co

    //--------------------------------
    cin >> t >> n >> k;

    m = n;
    for (int i = 1; i <= k; i++)  {
        m = m * (1 + t/100.0);
    }
    // làm tròn đến 2 chữ số thập phân
    cout << fixed << setprecision(2) << m << endl;

    //--------------------------------

    cin >> t >> n >> m;

    k = 0;
    while (n < m)
    {
        n = n * (1 + t / 100.0);
        k++;
    }
    cout << (int)k << endl;

    //--------------------------------

    cin >> t >> m >> k;

    double s = 1;
    for (int i = 1; i <= k; i++)
    {
        s = s * (1 + t / 100.0);
    }
    n = m / s;
    cout << fixed << setprecision(2) << n << endl;
}