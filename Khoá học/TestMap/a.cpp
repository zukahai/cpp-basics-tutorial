#include <bits/stdc++.h>

using namespace std;

vector<long long> v;

bool check(long long x)
{
    for (long long i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

main()
{
    // 2 3 5 7 23 29 31 37
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
}