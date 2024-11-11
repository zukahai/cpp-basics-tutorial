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
	
	cout << "Mang 2 chieu vua nhap la" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
}
