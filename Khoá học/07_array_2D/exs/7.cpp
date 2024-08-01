#include <bits/stdc++.h>

using namespace std;

int a[1000][1000];

int main() {
	int m, n;
	cin >> m >> n;
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	
	for (int i = 0; i < m; i++) {
		int max = a[i][0];
		for (int j = 1; j < n; j++) {
			if (max < a[i][j]) {
				max = a[i][j];
			}
		}
		cout << max << " ";
	}
	
}



