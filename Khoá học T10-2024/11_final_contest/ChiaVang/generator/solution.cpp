#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    // Bài giải của bạn ở dưới đây

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a + d == b + c || a + b + c == d)
        cout << "YES";
    else
        cout << "NO";
    


}
