#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    vector <long long> a;
    long long sum = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            a.push_back(i);
            if (i != n / i) {
                a.push_back(n / i);
            }
        }
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    
}