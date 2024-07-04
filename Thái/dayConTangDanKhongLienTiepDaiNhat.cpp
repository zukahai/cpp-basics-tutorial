#include <bits/stdc++.h>

using namespace std;

int a[1000000];
int dp[1000000];
int t[1000000];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    dp[0] = 1;
    for (int i = 1; i < n; i++) {
        dp[i] = 1;
        int indexMax = -1;
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i]) {
                if (dp[j] + 1 > dp[i]) {
                    dp[i] = dp[j] + 1;
                    indexMax = j;
                }
            }
        }
        t[i] = indexMax;
    }

    int max = dp[0];
    int indexMax = 0;
    for (int i = 1; i < n; i++) {
        if (dp[i] > max) {
            max = dp[i];
            indexMax = i;
        }
    }

    vector<int> result;
    for (int i = 0; i < max; i++) {
        result.push_back(a[indexMax]);
        indexMax = t[indexMax];
    }

    for (int i = max - 1; i >= 0; i--) {
        cout << result[i] << " ";
    }

}