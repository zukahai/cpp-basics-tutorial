#include<bits/stdc++.h>
using namespace std;

int (countDivisors)(int n)
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
    /*
    - Dòng đầu tiên: số lượng ước số của `a`
    - Dòng thứ hai: số lượng ước số của `b`
    - Dòng thứ ba: số lượng ước số của `c`
    */

    int a, b, c;
    cin >> a >> b >> c;
    cout << countDivisors(a) << endl;
    cout << countDivisors(b) << endl;
    cout << countDivisors(c) << endl;
}
