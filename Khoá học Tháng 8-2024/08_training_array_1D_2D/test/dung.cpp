#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int max = INT_MIN;
  for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 0 && max < a[i]) {
      max = a[i];
    }

  }
  if (max == INT_MIN) {
    cout << "-1";
  } else {
    cout << max;
  }
}
