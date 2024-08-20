#include <bits/stdc++.h>

using namespace std;

int main() {
    map <long long, int> mp;
    mp[10] = 5;
    mp[10] = 50;
    mp[1000000000000000000] = -1000;
    mp[-1234] = 100;
    mp[50]++;
    
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
}

/*
map: key -> value

vector: i -> a[i]
*/
