#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
long long a[1000][1000];
int main()
{
    int n, m;
    cin >> n >> m;
    long long max = LLONG_MIN;
    long long tong = 0;
    int maxIndex = 0;
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
            if (tong > max)
            {
                max = tong;
                maxIndex = i;
            }
        }
        tong = 0;
    }

    for (int j = 0; j < m; j++)
    {
        cout << a[maxIndex][j] << " ";
    }
}
