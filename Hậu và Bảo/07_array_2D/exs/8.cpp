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
	int chisoHangLonNhat = 0;
	for (int i = 0; i < m; i++) {
		long long tong = 0;
		for (int j = 0; j < n; j++) {
			tong = tong + a[i][j];
		}
		if (maxTong < tong) {
			maxTong = tong;
			chisoHangLonNhat = i;
		}
//		cout << "Tong cua hang " << i << " la " << tong << endl;
	}
	
//	cout << "maxTong " << maxTong;
	// In ra hang co chi so la chisoHangLonNhat
	for (int i = 0; i < n; i++) {
		cout << a[chisoHangLonNhat][i] << " ";
	}
	
	/*
	
					3 3
					1 20 3
					14 5 6
					17 1 2
					maxTong = 25
					chisoHangLonNhat = 1
					i = 2
			
			
	
	
	*/
	
}


