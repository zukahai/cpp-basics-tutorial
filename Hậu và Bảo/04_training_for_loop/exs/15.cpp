#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		if (i == 1 || i == m) {
			for (int j = 1; j <= n; j++) {
				cout << "*";
			}
			cout << endl;
		} else {
			cout << "*";
			for (int j = 1; j <= n - 2; j++) {
				cout << " ";
			}
			cout << "*" << endl;
		}
	}
}

