#include <bits/stdc++.h>

using namespace std;

int main() {
	int m, n; // m hang, n cot
	cin >> m >> n;
	int a[m][n];
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	
	// In ra hang cuoi cung trong mang
	cout << "In ra hang cuoi cung trong mang" << endl;
	for (int j = 0; j < n; j++) {
		cout << a[m - 1][j] << " ";
	}
	
}
