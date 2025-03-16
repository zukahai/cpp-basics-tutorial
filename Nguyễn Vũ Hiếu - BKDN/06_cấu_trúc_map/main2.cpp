#include <bits/stdc++.h>

using namespace std;
long long a[1000007];
map<long long, int> dem;

int main() {
    dem[10] = 7; // (10, 7)
    dem[1000000000000000000] = 1; // (1000000000000000000, 1)
    dem[-10000] = 1234; // (-10000, 1234)

    for (auto x : dem) {
        cout << x.first << " " << x.second << endl;
    }
    
}