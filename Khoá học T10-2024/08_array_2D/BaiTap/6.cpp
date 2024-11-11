#include<bits/stdc++.h>
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
    int soChan = 0; // dem so luong so chan
    for (int i = 0; i < m; i++) {
    	for (int j = 0; j < n; j++) {
    		if (a[i][j] % 2 == 0) {
    			soChan ++;
			}
		}
	}
	
	cout << soChan << " " << m * n - soChan;
}

