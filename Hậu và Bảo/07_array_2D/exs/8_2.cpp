#include <bits/stdc++.h>

using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	int a[m][n];
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	long long maxTong = 0;
	int chiSoCotLonNhat = 0;
	
	for (int j = 0; j < n; j++) {
		long long tong = 0;
		for (int i = 0; i < m; i++) {
			tong += a[i][j];
		}
		if (maxTong < tong) {
			maxTong = tong;
			chiSoCotLonNhat = j;
		}
	}
	
	// In ra cot co chi so chiSoCotLonNhat
	for (int i = 0; i < m; i++) {
		cout << a[i][chiSoCotLonNhat] << endl;
	}
}


