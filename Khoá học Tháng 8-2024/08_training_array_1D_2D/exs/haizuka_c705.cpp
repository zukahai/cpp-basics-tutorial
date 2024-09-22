#include <bits/stdc++.h>

using namespace std;

int main() {
	// m: so hang
	// n: so cot
	int m, n;
	cin >> m >> n;
	int a[m][n];
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	
	int max = INT_MIN;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] > max) {
				max = a[i][j];
			}
		}
	}
	
	int min = INT_MAX;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] < min) {
				min = a[i][j];
			}
		}
	}
	
	cout << max << " " << min;
	
	
}
