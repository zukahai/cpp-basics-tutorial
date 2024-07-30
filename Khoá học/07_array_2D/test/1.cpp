#include <bits/stdc++.h>

using namespace std;

int a[100][100];

int main() {
	int m, n; // m: so hang, n la so cot
	cin >> m >> n;
	
	// Nhap mang 2 chieu
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	
	// In ra dong dau tien cua mang a
	cout << "Cot cuoi cung" << endl;
	for (int k = 0; k < m; k++)
		cout << a[k][n - 1] << endl;
}

/*



*/

