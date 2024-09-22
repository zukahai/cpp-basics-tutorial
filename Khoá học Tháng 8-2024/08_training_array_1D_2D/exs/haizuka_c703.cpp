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
	
	for (int j = 0; j < n; j++)
		cout << a[0][j] << " ";
	
}
