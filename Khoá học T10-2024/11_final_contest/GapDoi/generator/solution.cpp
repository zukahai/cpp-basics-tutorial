#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    // Bài giải của bạn ở dưới đây

    int a, b;
    cin >> a >> b;
    if (a == 2 * b || b == 2 * a) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}
