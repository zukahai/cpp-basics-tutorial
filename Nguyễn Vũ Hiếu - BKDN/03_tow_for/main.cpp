#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
long long a[1001][1001];
int main()
{
    int n, m;
    cin >> n >> m;
    long long max = LLONG_MIN;
    long long tong = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            tong += a[i][j]; 
        }
        if (tong > max)
        {
            max = tong;
        }
        tong = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            tong += a[i][j];
        }
        if (tong == max)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
            return 0;
        }
        tong = 0;
    }
    return 0;
}
