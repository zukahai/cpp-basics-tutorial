#include <iostream>

using namespace std;

int tong(int n)
{
    int tongg = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0 && i % 2 != 0)
        {
            tongg += i;
        }

    return tongg;
}

int main()
{
    int n;
    cin >> n;
    cout << tong(n);
}
