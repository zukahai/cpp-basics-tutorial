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
	
	long long tong = 0; // tong moi hang
	long long max = -999999999999999999;
	int csHang = 0;
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			tong += a[i][j];
		}
		if (tong > max) {
			max = tong;
			csHang = i;
		}
		tong = 0;
	}
	
	for (int j = 0; j < n; j++) {
		cout << a[csHang][j] << " ";
	}
}
